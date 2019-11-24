#include <string> 
#include "student.h" 
#include<iostream>
using namespace std;
/*установка имени студента*/
void Student::set_name(std::string student_name)
{
	Student::name = student_name;
}

/*получение имени студента*/
std::string Student::get_name()
{
	return Student::name;
}

/*получение фамилии студента*/
std::string Student::get_last_name()
{
	return Student::last_name;
}
/*установка фамилии*/
void Student::set_last_name(std::string student_last_name)
{
	Student::last_name = student_last_name;
}
/*установка промежуточных оценок*/
void Student::set_scores(int scores[])
{
	for (int i = 0; i < 5; i++)
	{
		Student::scores[i] = scores[i];
	}
}
/*установка среднего балла*/
void Student::set_average_score(double ball)
{
	Student::average_score = ball;
}
/*получение среднего балла*/
double Student::get_average_score()
{
	return Student::average_score;

}

