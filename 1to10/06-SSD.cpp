/*	Marcelo Antonio Vilela Pardo	*/

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

#include "math.h"

int x;
long sum1;
long sum2;
long res;

 int main(){
 	cout << "Sum Square Difference of the first:" << endl; 
 	cin >> x;
 	for (int i = 1; i <= x; ++i){
 		sum1 += pow(i,2);
 	}
 	for (int i = 1; i <= x; ++i){
 		sum2 += i;
 	}
 	res = pow(sum2,2) - sum1;
 	cout << res << endl;
 	return 0;
 }