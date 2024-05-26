#include <stdio.h>

void soma (int *, int *);

int main (void){
	int valor1 = 1, valor2 = 2; // declarações de variáveis
	
/*
	-Programa simples para demonstrar o uso de uma função
	-Passagem por referência
*/

	printf ("\n Valores antes da chamada de funcao: %d | %d", valor1, valor2);
	printf ("\n O valor da soma: %d", valor1 + valor2);
	soma(&valor1, &valor2); // chamada de função | passagem por referência
	printf ("\n Valores apos a chamada de funcao: %d | %d", valor1, valor2);
	printf ("\n O valor da soma: %d", valor1 + valor2);
	return 0;
}

void soma (int *valor1, int *valor2){
	printf ("\n Entre com dois valores\n");
	scanf ("%d %d", valor1, valor2);
}