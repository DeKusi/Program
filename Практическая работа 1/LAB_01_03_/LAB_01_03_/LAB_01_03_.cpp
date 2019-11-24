#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int p;
	setlocale(LC_ALL, "Ru");
	cout << "Введите значение периметра :";
	cin >> p;
	double p2 = p / 2;
	double a = p / 3;
	double s = sqrt(p2 * pow(p2 - a, 3));
	cout << "\tСторона\t\tПлощадь\n\n\t" << a << "\t\t" << s << "\n";
}
