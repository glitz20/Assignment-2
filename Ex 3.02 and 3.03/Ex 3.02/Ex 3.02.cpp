//Submitted by Sabin Sapkota//
//THIS FILE CONTAINS SOLUTION FOR BOTH 3.02 AND 3.03, AS QUESTION STATES TO USE THE SAME CLASS FOR BOTH//

#include "LinearEquation.h"//Header file//
#include <iostream>
using namespace std;

int main() {
	//This is for 3.02//
	double a, b, c, d, e, f;
	cout << "Enter a, b, c, d, e, f"<<endl;
	cin >> a >> b >> c >> d >> e >> f;

	LinearEquation point1(a, b, c, d, e, f);

	if (point1.isSolvable() == 0) {
		cout << "The equation has no solution" << endl;
	}
	else
		cout << "The value of x is " << point1.getx() <<" and the value of y is " << point1.gety() << endl;
	//This is for 3.03//
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cout << " Enter x1, y1, x2, y2, x3, y3, x4, y4" << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;


	double g = (y1 - y2);
	double h = -(x1 - x2);
	double i = (y3 - y4);
	double j = -(x3 - x4);
	double k = (y1 - y2)*x1 - (x1 - x2)*y1;
	double l = (y3 - y4)*x3 - (x3 - x4)*y3;

	LinearEquation intersection(g, h, i, j, k, l);

	if (intersection.isSolvable() == 0) {
		cout << "The two lines are parallel" << endl;
	}
	else
		cout << "The value of x is " << intersection.getx() << " and the value of y is " << intersection.gety() << endl;

	return 0;
}