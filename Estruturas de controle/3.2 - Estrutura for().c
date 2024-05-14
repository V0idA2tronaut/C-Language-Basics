#include <stdio.h>

int main (void){
	int soma = 0, valor; // declaração de variáveis
	
/*

	-Programa para demonstrar mais da estrutura de repetição for
	-Apenas um loop com somas
	
*/
	for (valor = 0; valor < 100; valor++) soma += valor;
	
	printf ("%d", soma);
	return 0;
}