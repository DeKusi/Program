#include <iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	double x;
	double a, b;
	cout << "\n������� a � b:\n";
	cin >> a;
	cin >> b;
	x = a / b;
	cout << "\nx = " << x << endl;
	return 0;
}