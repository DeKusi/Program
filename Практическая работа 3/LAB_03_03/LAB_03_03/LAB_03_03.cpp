#include<iostream>
#include<math.h>
using namespace std;

void privet(string name);
void privet(string name, int k);

int main()
{
	setlocale(LC_ALL, "Ru");
	string name;
	int k;
	cout << "Введите имя :";
	cin >> name;
	cout << "Введите любимое число :";
	cin >> k;
	privet(name);
	privet(name, k);

}
void privet(string name)
{
	cout << name << ", здравствуйте!" << endl;
}
void privet(string name, int k)
{
	cout << name << " " << ", еще раз" << "здравствуйте! " << "Вы ввели " << k << endl;
}