/*	Marcelo Antonio Vilela Pardo	*/

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

#include "math.h"

int x;
int control;
int mod;

 int main(){
 	cout << "smallest number evenly divisible from 1 to :" << endl;
 	cin >> x;
 	int val = x - 1;
 	while(control != x){
 		control = 0;
 		val++;
 		for (int i = 1; i <= x; ++i){
 			mod = val % i;
 			if (mod == 0){
 				control++;
 			}
 		}
 	}
 	cout << val << endl;
 	return 0;
 }