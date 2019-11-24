#include<iostream>
#include<math.h>
using namespace std;
double dlina(int x, int y, int x1, int y1)
{
	double d = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
	return d;
}
double area(double a, double b, double c)
{
	double p2 = (a + b + c) / 2;
	return sqrt(p2 *(p2 - a)+p2* (p2 - b)+p2* (p2 - c));
}
int main()
{
	setlocale(LC_ALL, "Ru");
	int x[5];
	int y[5];
	double s[7];//длины сторон
	double pl[3];//площади

	cout << "Введите координаты точек пятиугольника :\n";
	for (int i = 0; i < 5; i++)
	{
		cout <<i+1<< " точка\tx" << i + 1 << "=";
		cin >> x[i];
		cout << "\ty" << i + 1 << "=";
		cin >> y[i];
		cout << "\n";
	}
	s[0] = dlina(x[0], y[0], x[1], y[1]);
	s[1] = dlina(x[1], y[1], x[2], y[2]);
	s[2] = dlina(x[0], y[0], x[2], y[2]);
	s[3] = dlina(x[2], y[2], x[3], y[3]);
	s[4] = dlina(x[0], y[0], x[3], y[3]);
	s[5] = dlina(x[3], y[3], x[4], y[4]);
	s[6] = dlina(x[0], y[0], x[4], y[4]);
	
	pl[0] = area(s[0], s[1], s[2]);
	pl[1] = area(s[2], s[3], s[4]);
	pl[2] = area(s[4], s[5], s[6]);

	double v = pl[0] + pl[1] + pl[2];
	cout << "Площадь пятиугольника = " << v;
}