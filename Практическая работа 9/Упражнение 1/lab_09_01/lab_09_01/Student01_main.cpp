#include<iostream>
#include<string>
#include "studnt.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Ru");

	Student student01;
	string name;
	string last_name;
	int scores[5];

	cout << "Name: ";
	getline(cin, name);
	cout << "Last name: ";
	getline(cin, last_name);

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Score: ";
		cin >> scores[i];
		sum += scores[i];
	}

	student01.set_name(name);
	student01.set_last_name(last_name);

	try
	{
		student01.set_scores(scores);

		double average_score;
		average_score = sum / 5.0;

		student01.set_average_score(average_score);

		cout << "Average ball for" << student01.get_name() << " " << student01.get_last_name() << " is " << student01.get_average_score() << endl;

	}
	
	catch (Student::ExScore ex) 
	{ 
		cout << "\n������ ������������� " << ex.origin;   
		cout << "\n��������� �������� ������ " << ex.iValue << "�������� ������������\n"; 
	}
	
}