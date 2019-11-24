#include <iostream>
#include <fstream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ru");
	double sum = 0;
	int const N = 100;
	double nums[N];
	for (int i = 0; i < N; i++)
	{
		nums[i] = rand() % 100;
	}
	ofstream out ("test", ios::out | ios::binary);
	if (!out)
	{
		cout << "Файл открыть невозможно !" << endl;
		return 1;
	}
	out.write((char*)nums, sizeof(nums));
	out.close();
	ifstream in("test", ios::in | ios::binary);
	if (!in)
	{
		cout << "Файл невозможно открыть !\n";
	}
	in.read((char*)&nums, sizeof(nums));
	int k = sizeof(nums) / sizeof(double);
	for (int i = 0; i < k; i++)
	{
		sum = sum + nums[i];
		cout << nums[i] << " ";
	}
	cout << "\nsum = " << sum;
	in.close();

}
