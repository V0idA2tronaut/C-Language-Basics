#include <stdio.h>

int main (void){
	int x;
	
/*
	-Demonstrando a instrução continue
*/

	for (x = 0; x < 10; x++){
		if (x == 5){
			continue;
		}
		printf ("%d\n", x);
	}
	return 0;
}