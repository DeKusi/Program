#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	void set_name(string);
	string get_name();
	void set_last_name(string);
	string get_last_name();
	void set_scores(int[]);
	void set_average_score(double);
	double get_average_score();
private:
	int scores[5];
	double average_score;
	string name;
	string last_name;


};
//class Student
//{
//public:
//	/*ввод имени студента*/
//	void set_name(string student_name)
//	{
//		name = student_name;
//	}
//	/*вывод имени студента*/
//	string get_name()
//	{
//		return name;
//	}
//	/*ввод фамилии студента*/
//	void set_last_name(string student_last_name)
//	{
//		last_name = student_last_name;
//	}
//	/*вывод фамилии студента*/
//	string get_last_name()
//	{
//		return last_name;
//	}
//
//	/*ввод оценок студента*/
//	void set_scores(int student_scores[])
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			scores[i] = student_scores[i];
//		}
//	}
//
//	/*ввод среднего балла*/
//	void set_average_score(double ball)
//	{
//		average_score = ball;
//	}
//
//	/*вывод среднего балла*/
//	double get_average_score()
//	{
//		return average_score;
//	}
//private:
//	int scores[5];
//	double average_score;
//	string name;
//	string last_name;
//
//};
