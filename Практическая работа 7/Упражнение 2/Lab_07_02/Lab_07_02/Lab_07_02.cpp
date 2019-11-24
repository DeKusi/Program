#include<iostream>
#include<Windows.h>
using namespace std;

struct Distanse
{
	int feet;
	double inches;
};

Distanse AddDist(const Distanse &d1, const Distanse &d2)
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

void ShowDist(const Distanse &d)
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}

int main()
{
	setlocale(LC_ALL, "Ru");
	Distanse d1 = InputDist();
	Distanse d2 = { 1,6.25 };
	Distanse d3 = AddDist(d1, d2);
	/*	ShowDist(d1);
		ShowDist(d2);
		ShowDist(d3);*/
	ShowDist(d1);
	ShowDist(d2);
	ShowDist(d3);



}
