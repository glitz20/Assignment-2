//Submitted by Sabin Sapkota//
//header file//
#ifndef MYPOINT_H
#define MYPOINT_H

class MyPoint {
public:
	MyPoint();
	MyPoint(double,double);
	double distance(MyPoint);
	double getx();
	double gety();

private:
	double x;
	double y;




};


#endif;