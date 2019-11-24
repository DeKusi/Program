#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	char op;
	cout << " Сдела свой выбор, собери авто своей меты :";
	cin >> op;
	switch (op)
	{
	case 's':
		cout << "Радио играть должно\n";
		cout << "Колеса круглые\n";
		break;
	case 'v':
		cout << "Кондиционер хочу\n";
		break;
	default:
		cout << "Мощный двигатель\n";
		break;
	}
}
