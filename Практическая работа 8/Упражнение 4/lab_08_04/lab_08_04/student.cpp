#include <string> 
#include "student.h" 
#include<iostream>
#include<fstream>
using namespace std;
/*конструктор*/
Student::Student(string name, string last_name)
{
	Student::set_name(name);
	Student::set_last_name(last_name);
}

/*деструктор*/
Student::~Student()
{
	Student::save();
}

/*сохранение в файл*/
void Student::save()
{
	ofstream fout("students.txt", ios::app);
	fout << Student::get_name() << " " << Student::get_last_name() << " ";
	for (int i = 0; i < 5; i++)
	{
		fout << Student::scores[i] << " ";
	}
	fout << endl;
	fout.close();
}

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



