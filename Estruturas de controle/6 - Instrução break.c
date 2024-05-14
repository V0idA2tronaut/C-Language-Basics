#include <stdio.h>

int main (void){
	int x;
	
/*
	
	-Programa para demonstrar a instrução break;
	
*/

	for (x = 0; x < 10; x++){
		if (x == 5){
			break;
		}
		printf ("%d\n", x);
	}
	return 0;
}