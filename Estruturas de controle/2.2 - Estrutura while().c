#include <stdio.h>

int main (void){
	// declaração de variáveis
	int contador = 0;
	float valores, total = 0.0;
	
/*

	-Programa para demonstrar a estrutura de repetição while
	-É usado uma repetição controlada por sentinela
	
*/
	
	printf ("\n Entre com um valor decimal | -1 para finalizar");
	scanf ("%d", &contador);
	
	while (contador != -1){
		scanf ("%f", &valores);
		total = total + valores;
		printf ("\n Entre com um valor decimal | -1 para finalizar");
		scanf ("%d", &contador);
	}
	
	printf ("a soma total foi de : %.2f\n", total);
	return 0;
}