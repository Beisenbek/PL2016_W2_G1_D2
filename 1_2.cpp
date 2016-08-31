#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double x,y,z;
	cin >> x >> y >> z;
	
	double a1 = sqrt(abs(x-1)) - pow(abs(y),1.0/3);
	double a2 = 1 + x*x/2 + y*y/4;
	double a = a1/a2;

	double b1 = atan(z) + exp(-x-3);
	double b = x * b1;

	printf("a value is: %.1f b value is: %.4f",a,b);

	return 0;
}


