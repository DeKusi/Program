#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int k, m, s ;
	s = 0;
	cout << "k ="; cin >> k;
	cout << "m ="; cin >> m;
	for (int i = 1; i <= 100; i++)
	{
		if (i > k&& i < m)
		{
			continue;
		}
		s += i;

	}
	cout << "Сумма чисел в диапазоне от 1 до k и от m до 100 равна :" << s;
}