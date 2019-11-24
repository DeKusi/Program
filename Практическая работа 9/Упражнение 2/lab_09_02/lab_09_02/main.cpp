#include<iostream>
#include "Triangle.h";
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	double side_1, side_2, side_3;
	cout << "¬ведите длину первой стороны :";
	cin >> side_1;
	cout << "¬ведите длину второй стороны :";
	cin >> side_2;
	cout << "¬ведите длину третьей стороны :";
	cin >> side_3;

	try
	{
		Triangle triangl01(side_1, side_2, side_3);
		cout << "ѕлощадь треугольника : " << triangl01.Area() << endl;
	}
	catch (Triangle::ExSide ex)
	{
		cout << "не правильно введены стороны: " << ex.s1 <<" "<< ex.s2 <<" "<< ex.s3<<endl;
	}
	

}
