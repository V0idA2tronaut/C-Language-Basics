#include <stdio.h>

int main (void){
	int value, i; // declaração de variáveis
	
/*
	-Mostrando todos os divisores de um número
*/

	printf ("\n Entre com um valor inteiro");
	scanf ("%d", &value);
	for (i = 1; i <= value; i++) if (value%i == 0) printf ("%d\n", i);
	return 0;
}