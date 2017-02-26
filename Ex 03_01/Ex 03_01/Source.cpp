//Submitted by Sabin Sapkota//

#include "mypoint.h"//calling for header//
#include<iostream>
#include <cmath>
using namespace std;

int main(){
MyPoint p1;
MyPoint p2(10, 30.5);//creating object//
cout <<"The distance between the given two points is "<< p1.distance(p2) << endl;//calling distance function using the object//
return 0;
}
