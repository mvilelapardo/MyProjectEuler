/*	Marcelo Antonio Vilela Pardo	*/

#include <iostream>
#include <stdio.h>
#include <math.h>

int main(){
	double a = 1;
	double b = 2;
	double c = 0;
	double sol;

	while(a + b + c != 1000){
		while(a + b + c < 1000){
			b++;
			c = sqrt(pow(a,2) + pow(b,2));
		}
		if (a + b + c != 1000){
			b = 1;
			c = 1;
			a++;
		}else{
			sol = a*b*c;
		}
	}

	printf("%lf\n%lf\n%lf\n%lf\n", sol,a,b,c);
	return 0;
}