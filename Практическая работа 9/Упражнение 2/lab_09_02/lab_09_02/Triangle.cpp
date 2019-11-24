#include<iostream>
#include <math.h>
#include "Triangle.h"
using namespace std;

/*конструктор*/
Triangle::Triangle(double side_1, double side_2, double side_3)
{
//	Triangle::side_1 = side_1;
	if ((side_1 + side_2 <= side_3) or (side_2 + side_3 <= side_1) or (side_1 + side_3 <= side_2))
	{
		throw ExSide(side_1, side_2, side_3);
	}
	Triangle::set_side_1(side_1);
	Triangle::set_side_2(side_2);
	Triangle::set_side_3(side_3);

//	Triangle::side_2 = side_2;
//	Triangle::side_3 = side_3;
}

 void Triangle::set_side_1 (double side_1)
{
	Triangle::side_1 = side_1;
}

 void Triangle::set_side_2(double side_2)
 {
	 Triangle::side_2 = side_2;
 }

 void Triangle::set_side_3(double side_3)
 {
	 Triangle::side_3 = side_3;
 }

double Triangle::Area()
	{
	double p = (Triangle::side_1 + Triangle::side_2 + Triangle::side_3) / 2;
	return (sqrt(p * (p - Triangle::side_1) * (p - Triangle::side_2) * (p - Triangle::side_2)));
	}
