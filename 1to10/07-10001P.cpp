/*	Marcelo Antonio Vilela Pardo	*/

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

#include "math.h"

int x;

 int main(){
 	cout << "Prime num:" << endl;
 	cin >> x;
 	int primos = 0;
 	long cont = 1;
 	int control;
 	while(primos < x){
 		cont++;
 		control = 0;
 		for (int i = 1; i <= cont; ++i){
 			if (cont % i == 0){
 				control++;
 			}
 			if (control > 2){
 				i = cont + 1;
 			}
 		}
 		if (control <= 2){
 			cout << cont << "\n";
 			primos++;
 		}
 	}
 	cout << cont << endl;
 	return 0;
 }