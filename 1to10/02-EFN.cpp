/*	Marcelo Antonio Vilela Pardo	*/

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

 int main(){
 	int i0 = 1;
 	int i1 = 1;
 	int var = 0;
 	int control = 0;
 	int sum = 0;

 	while (control != 1){
 		if (i1 + i0 <= 4000000){
 			var = i1;
 			i1 += i0;
 			i0 = var;
 			if (i1 % 2 == 0){
 				sum += i1;
 			}
 		} else {
 			control = 1;
 		}
 	}
 	cout << sum << endl;
 }