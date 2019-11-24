// Использование функции при организации программы 

#include<iostream>
#include<math.h>
using namespace std;

void privet(string name);

int main()
{
	setlocale(LC_ALL, "Ru");
	string name;
	cout << "Введите имя :";
	cin >> name;
	privet(name);

}
void privet(string name)
{
	cout << name << ", здравствуйте!" << endl;
}
