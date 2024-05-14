#include <stdio.h>

int main (void){
	int contador = 1, grau, total = 0; // declaração de variáveis
	
/*
	-Programa para demonstrar a estrutura de repetição while
	-É usado uma repetição controlada
	
*/
	
	while (contador <= 10){
		printf ("\n Entre com um valor: ");
		scanf ("%d", &grau);
		total = total + grau;
		contador = contador + 1;
	}
	
	printf ("\n A soma dos valores finais e: %d", total);
	return 0;
}