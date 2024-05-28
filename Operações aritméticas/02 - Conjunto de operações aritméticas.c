#include <stdio.h>

int main (){
	int valor1, valor2, valor3, valor4; // declaração das variáveis
	
/*
	-Calcular a diferença entre as duas primeiras entradas (inteiros) com as duas seguintes entradas, multiplicando-se a primeira
pela segunda, e a terceira pela quarta

*/

	printf ("\n Entre com 4 valores inteiros: \n");
	scanf ("%d %d %d %d", &valor1, &valor2, &valor3, &valor4);
	printf ("\n A diferença entre valor1 * valor2 e valor3 * valor4 é: %d", (valor1 * valor2) - (valor3 * valor4));
	return 0;
}