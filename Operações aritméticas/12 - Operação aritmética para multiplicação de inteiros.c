#include <stdio.h>

int main (){
	int value1, value2; // declaração de variáveis
	
/*
	-Programa simples para realizar a multiplicação de 2 números
*/
	
	printf ("\n Entre com dois valores inteiros a serem multiplicados: ");
	scanf ("%d %d", &value1, &value2);
	printf ("%d", value1 * value2);
	return 0;
}