#pragma once
#include<iostream>
#include <math.h>
using namespace std;

class Triangle
{
public:
	class ExSide
	{
	public:
		double s1;
		double s2;
		double s3;
		ExSide(double side1, double side2, double side3)
		{
			s1 = side1;
			s2 = side2;
			s3 = side3;
		}

	};
	/*конструктор*/
	Triangle (double, double, double);
	

	/*подсчёт площади*/
	double Area();

	/*set side 1*/
	void set_side_1(double);

	/*set side 2*/
	void set_side_2(double);

	/*set side 3*/
	void set_side_3(double);



private:
	double side_1;
	double side_2;
	double side_3;
};
