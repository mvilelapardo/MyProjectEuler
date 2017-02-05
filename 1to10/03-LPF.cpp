
/*	Marcelo Antonio Vilela Pardo	*/

#include "iostream"

using std::cin;
using std::cout;
using std::endl;

 int main(){
 	int primo = 0;
 	int comp = 0;
 	long div = 600851475143;
 	int mod;
 	int i;
 	while (div != 1){
 		i = 1;
 		mod = 1;
 		while (mod != 0){
 			i++;
 			mod = div % i;
 		}
 		div = div / i;
 		comp = i;
		if (comp > primo){
 			primo = comp;
 		}
 	}
 	cout << "primo: ";
 	cout << primo << endl;
 	return 0;
 }