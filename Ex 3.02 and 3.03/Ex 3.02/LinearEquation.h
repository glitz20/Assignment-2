//Submitted by Sabin Sapkota//
//THIS HEADER FILE IS FOR BOTH 3.02 AND 3.03//

#ifndef LinearEquation_H
#define LinearEquation_H

class LinearEquation {
public:
	LinearEquation();
	LinearEquation(double, double, double, double, double, double);
	double geta();
	double getb();
	double getc();
	double getd();
	double gete();
	double getf();
	bool isSolvable();
	double getx();
	double gety();


private:
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;

};


#endif 

