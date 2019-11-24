#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	double x, y, s;
	int k;
	s = 0;
	cout << "Сколько вы хотите сделать выстрелов :"; cin >> k;
	for (int i = 1; i <= k; i++)
	{
		cout << i << " выстрел:\tx = ";
		cin >> x;
		cout << "\t\ty = ";
	    cin >> y;
		cout << "\n";
		if (x * x + y * y <= 1) s += 10;
		else if (x * x + y * y <= 4) s += 5;
		else if (x * x + y * y <= 9) s += 1;
    }
	cout << "Сумма очков :" << s<<"\n";
	if (s >= k * 0.85 * 10) cout << "Снайпер";
	else if (s >= k * 0.45 * 10) cout << "Просто стрелок";
	else cout << "Мазила";
}
