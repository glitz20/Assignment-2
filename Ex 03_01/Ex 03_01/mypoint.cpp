
//class implementation file//
#include "mypoint.h";
#include <cmath>;
//constructor with default value//
MyPoint::MyPoint() {
	x = 0;
	y = 0;
}

MyPoint::MyPoint(double newx, double newy) {
	x = newx;
	y = newy;
}

double MyPoint::getx() {
	return x;
}

double MyPoint::gety() {
	return y;
}

double MyPoint::distance(MyPoint p2 ) {
	return sqrt((p2.x - x)*(p2.x - x) + (p2.y - y)*(p2.y - y));
}