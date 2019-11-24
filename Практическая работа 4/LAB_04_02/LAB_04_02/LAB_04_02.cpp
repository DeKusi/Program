#include <iostream> 
#include<math.h>
using namespace std;

int Myroot(double a, double b, double c, double & x1, double & x2)
{
	double d = b * b - 4 * a * c;
	if (d < 0) return -1;
	else if (d == 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		return 0;
	}
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		return 1;
	}
}

int main()
{
	setlocale(LC_ALL, "Ru");
	double a, b, c,x1,x2;
	cout << "Введите коэффициенты квадратного уравнения :\n\tа = ";
	cin >> a;
	cout << "\tb = ";
	cin >> b;
	cout << "\tc = ";
	cin >> c;
	if (Myroot(a, b, c, x1, x2) == -1)
	{
		cout << "Корней нет";
	}
	else if (Myroot(a, b, c, x1, x2) == 0)
	{
		cout << " Корни совпадают x1 = x2 =" << x1;
	}
	else if (Myroot(a, b, c, x1, x2) == 1)
	{
		cout << "x1 = " << x1 << "\tx2 = " << x2;
	}

}