#include <stdio.h>

int main (){
	int i;
	
/*
	-Números pares entre 1 e 100
*/

	for (i = 0; i <=100; i++) if (i%2 == 0) printf ("%d|", i);
	return 0;
}