#include <iostream>
#include <string>
#include<fstream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ru");
	fstream fout;
	fout.open("Poem");
	if (!fout.is_open())
	{
		cout << "Не удалось открыть файл!\n";
	}
	cout << "Сколько строчек в вашем стихотворении?\n";
	int col;
	cin >> col;
	const int collll = col;
	cout << "Напечатайте ваше стихотворение\n";
	string a;
	for (int i = 0; i <= collll; i++)
	{
		getline(cin, a);
		fout << a<< "\n" ;
	}
	fout.close();
	
}

