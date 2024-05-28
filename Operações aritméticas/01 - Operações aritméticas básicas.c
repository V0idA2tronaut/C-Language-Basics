#include <stdio.h>

int main (void){
	int valor1 = 10, valor2 = 5; // declaração das variáveis utilizadas
	
/*
	-programa para demonstra as quatro operações básicas
	-incluindo resto
	-observe que na saída, o valor de valor2/valor1 é 0 apenas devido a forma da qual a variável é declarada (int)
*/
	
	printf ("\n a soma entre valor1 e valor2: %d\n", valor1 + valor2); // soma
	printf ("\n a subtracao entre valor1 e valor2: %d\n", valor1 - valor2); // subtração
	printf ("\n a subtracao entre valor2 e valor1: %d\n", valor2 - valor1); // subtração
	printf ("\n a multiplicacao entre valor1 e valor2: %d\n", valor1 * valor2); // multiplicação
	printf ("\n a divisao entre valor1 e valor2: %d\n", valor1 / valor2); // divisão
	printf ("\n a divisao entre valor2 e valor1: %d\n", valor2 / valor1); // divisão
	printf ("\n o resto da divisao entre valor1 e valor2: %d\n", valor1 % valor2); // resto de divisão
	printf ("\n o resto da divisao entre valor2 e valor1: %d\n", valor2 % valor1); // resto de divisão
	return 0;
}