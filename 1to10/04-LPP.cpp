/*	Marcelo Antonio Vilela Pardo	*/

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

#include "math.h"

int dig;
int cdig;
int count;
int pal;
int cpal;
int res;

 int main(){
 	cout << "Dígitos:" << endl;
 	cin >> dig;
	for (int i = pow(10,dig-1); i < pow(10,dig); ++i){
		for (int j = pow(10,dig-1); j < pow(10,dig); ++j){
			pal = i * j;
			cdig = pal;
			count = 0;
			cpal = 0;
			while(cdig > 0){
				count++;
				cdig/=10;
			}
			while(pal > 0){
				cpal += (pal % 10) * pow(10,count-1);
				count--;
				pal/=10;
			}
			if (cpal == (i * j) && res < cpal){
				res = cpal;
			}
		}
	}
	cout << res << endl;
	return 0;
 }