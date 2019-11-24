#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	cout << "Введите год :";
	int year;
	cin >> year;
	if (year % 400 == 0)
		cout << "Yes";
	else if (year % 4 == 0 && year % 100 != 0)
		cout << "Yes";
	else cout << "No";

}