/*	Marcelo Antonio Vilela Pardo	*/
// I Copied the number in a text document, called 08-LPIASinf

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(){
	FILE *fp;

	char buffer[1000];
	int digitos[1000];

	fp = fopen("08-LPIASinf","r");

	fscanf(fp, "%s", buffer);

	//printf("%s\n", buffer);

	for (int i = 0; i < 1000; ++i){
		digitos[i] = buffer[i] - 48;
	}

	int contador = 0;
	long almacen = 1;
	long mayor = 0;
	while(contador<1000){
		for (int i = contador; i < contador + 13; ++i){
			almacen *= digitos[i];
		}
		printf("%lu\n", almacen);
		if (almacen > mayor){
			mayor = almacen;
		}
		almacen = 1;
		contador++;
	}

	printf("%lu\n", mayor);
	fclose(fp);
	return 0;
}