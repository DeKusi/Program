#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int x, y;
	cout << "Введите координаты точки :\nx = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	if (x * x + y * y < 9 && y > 0)
		cout << "Внутри";
	else if (x * x + y * y > 9 || y < 0)
		cout << "Снаружи";
	else cout << "На границе";

}