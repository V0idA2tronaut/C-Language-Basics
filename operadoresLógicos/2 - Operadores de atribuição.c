#include <stdio.h>

int main (void){
	int valor = 5; // declaração de variável
	
/*

	-programa que demonstra pré-incrementação e pós-incrementação
	
*/
	
	printf ("%d\n", valor);
	printf ("%d\n", valor++); //pós-incremento
	printf ("%d\n\n", valor);
	valor = 5;
	printf ("%d\n", valor);
	printf ("%d\n", ++valor); //pré-incremento
	printf ("%d\n", valor);
	return 0;
}