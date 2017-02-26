#include "LinearEquation.h"

LinearEquation::LinearEquation() {
  a = 0;
  b = 0;
  c = 0;
  d = 0;
  e = 0;
  f = 0;
}

LinearEquation::LinearEquation(double newa,double newb,double newc, double newd, double newe, double newf) {
	a = newa;
	b = newb;
	c = newc;
	d = newd;
	e = newe;
	f = newf;
}

double LinearEquation::geta() {
	return a;
}

double LinearEquation::getb() {
	return b;
}

double LinearEquation::getc() {
	return c;
}

double LinearEquation::getd() {
	return d;
}

double LinearEquation::gete() {
	return e;
}

double LinearEquation::getf() {
	return f;
}
bool LinearEquation::isSolvable() {
	return a*d - b*c != 0;
}

double LinearEquation::getx() {
	double x= (e*d-b*f)/(a*d-b*c);
	return x;
}

double LinearEquation::gety() {
	double y = (a*f - e*c) / (a*d - b*c);
	return y;
}

 