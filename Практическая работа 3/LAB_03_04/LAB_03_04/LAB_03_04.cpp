#include <iostream>
#include<math.h>
using namespace std;

double area(double a)
{
	double p2 = (a * 3) / 2;
	double s = sqrt(p2 * pow(p2 - a, 3));
	return (s);
}

double area(double a, double p)
{
	double s = sqrt(p * pow(p - a, 3));
	return (s);
}

int main()
{
	int p;
	setlocale(LC_ALL, "Ru");
	cout << "Введите значение периметра :";
	cin >> p;
	double a = p / 3;
	cout << "\tСторона\t\tПлощадь\n\n\t" << a << "\t\t" << area(a) << "\n";
}
