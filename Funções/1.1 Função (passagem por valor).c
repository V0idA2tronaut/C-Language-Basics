#include <stdio.h>

int soma (int, int);

int main (void){
	int valor1, valor2; // declarações de variáveis
	
/*
	-Programa simples para demonstrar o uso de uma função
	-Passagem por valor
*/

	printf ("\n Entre com dois valores\n");
	scanf ("%d %d", &valor1, &valor2);
	printf ("\n A soma de ambos os valores e: %d", soma(valor1, valor2));
	return 0;
}

int soma (int valor1, int valor2){
	return (valor1 + valor2);
}