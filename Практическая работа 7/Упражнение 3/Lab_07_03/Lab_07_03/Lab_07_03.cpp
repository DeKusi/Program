#include<iostream>
#include <Windows.h>
using namespace std;

struct Distanse
{
	int feet;
	double inches;
};

Distanse AddDist(Distanse d1, Distanse d2)
{
	Distanse d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12)
	{
		d.feet++;
		d.inches -= 12;
	}
	return d;
}

Distanse InputDist()
{
	Distanse d;
	cout << "\nВведите значение футов: ";
	cin >> d.feet;
	cout << "\nВведите значение дюймов: ";
	cin >> d.inches;
	return d;
}

void ShowDist(Distanse d)
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}

int main()
{
	setlocale(LC_ALL, "Ru");
	/*Distanse d1 = InputDist();
	Distanse d2 = { 1,6.25 };
	Distanse d3 = AddDist(d1, d2);
		ShowDist(d1);
		ShowDist(d2);
		ShowDist(d3);
	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();*/
	int n;
	cout << "Введите размер массива расстояний: ";
	cin >> n;
	Distanse* masDist = new Distanse[n];

	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();
	}

	for (int i = 0; i < n; i++)
	{
		ShowDist(masDist[i]);
	}

	for (int i = 0; i < n-1; i++)
	{
		masDist[i + 1] = AddDist(masDist[i], masDist[i + 1]);
	}

	cout << "Сумма всех растояний: ";
	ShowDist (masDist[n - 1]);

	delete[] masDist;

}