#include<iostream>
#include "Triangle.h";
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	double side_1, side_2, side_3;
	cout << "������� ����� ������ ������� :";
	cin >> side_1;
	cout << "������� ����� ������ ������� :";
	cin >> side_2;
	cout << "������� ����� ������� ������� :";
	cin >> side_3;

	try
	{
		Triangle triangl01(side_1, side_2, side_3);
		cout << "������� ������������ : " << triangl01.Area() << endl;
	}
	catch (Triangle::ExSide ex)
	{
		cout << "�� ��������� ������� �������: " << ex.s1 <<" "<< ex.s2 <<" "<< ex.s3<<endl;
	}
	

}
