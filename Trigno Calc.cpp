/* MUHAMMAD HAYYAN
23I-2041__CY-A
Assignment#03____Q9 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
		//Program to display sine, cosine and tangent of angle
		
	float angle, s, c, t;
	
	cout<< "\nEnter the angle in radians\t";
	cin>> angle;
	
	s = sin(angle);
	c = cos(angle);
	t = tan(angle);
	
	cout<< "\n\nSine of angle is:\t"<<setprecision(4)<<fixed<<s<<endl;
	cout<< "\nCosine of angle is:  \t"<<setprecision(4)<<fixed<<c<<endl;
	cout<< "\nTangent of angle is:  \t"<<setprecision(4)<<fixed<<t<<endl;
	
	return 0;
}
