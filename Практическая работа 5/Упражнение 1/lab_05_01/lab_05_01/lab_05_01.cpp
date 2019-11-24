#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Ru");
	int s = 0;
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas [" << i << "] = ";
		cin >> mas[i];
	}
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << "Значение суммы всех элементов : " << s << "\nСреднее значение : " << s / n;

	//8a
	int summaotr = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			summaotr += mas[i];
		}
	}
	cout << "\nСумма отрицательных элементов : " << summaotr;
	//8b
	int summapol = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)
		{
			summapol += mas[i];
		}
	}
	cout << "\nСумма положительных элементов : " << summapol;
	//8c
	int sumnech = 0;
	for (int i = 1; i < n; i += 2)
	{
		sumnech += mas[i];
	}
	cout << "\nСумма элементов с нечётными номерами : " << sumnech;
	//8d
	int sumch = 0;
	for (int i = 0; i < n; i += 2)
	{
		sumch += mas[i];
	}
	cout << "\nСумма элементов счётными номерами : " << sumch;

	//9a
	int maxch = -32768;
	int indmax = 0;
	int indmin = 0;
	int minch = 32767;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > maxch)
		{
			maxch = mas[i];
			indmax = i;

		}
		if (mas[i] < minch)
		{
			minch = mas[i];
			indmin = i;
		}
	}
	cout << "\nИндекс максимального значения : " << indmax << "\nИндекс минимального значения : " << indmin;
	//9b
	int a = indmax;
	int b = indmin;
	if (b < a)
	{
		int t = a;
		a = b;
		b = t;
	}
	int pro = 1;
	for (int i = a + 1; i < b; i++)
	{
		pro = pro*mas[i];
	}
	cout << "\nПроизведение чисел между максимальным и минимальным значениями : " << pro;
}
