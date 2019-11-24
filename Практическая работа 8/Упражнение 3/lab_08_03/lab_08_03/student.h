#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	/*установка имени студента*/
	void set_name(string);

	/*получение имени студента*/
	string get_name();

	/*установка фамилии*/
	void set_last_name(string);

	/*получение фамилии студента*/
	string get_last_name();

	/*установка промежуточных оценок*/
	void set_scores(int[]);

	/*установка среднего балла*/
	void set_average_score(double);

	/*получение среднего балла*/
	double get_average_score();

private:
	int scores[5];
	double average_score;
	string name;
	string last_name;


};