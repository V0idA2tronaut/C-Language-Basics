#include <stdio.h>

int main (void){
	int valor1 = 10, valor2 = 5, resultado; // declaração das variáveis
	
/*

	-programa para demonstar operações relacionais
	-a variável "resultado" retorna 0 se verdadeiro, e 1 se falso
	
*/
	resultado = (valor1 == valor2); // comparação de igualdade
	printf ("verificando se o valor1(%d) e igual a (==) ao valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 > valor2); // maior que
	printf ("verificando se o valor1(%d) e maior (>) do que o valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 < valor2); // menor que
	printf ("verificando se o valor1(%d) e menor (<) do que o valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 >= valor2); // maior/igual que
	printf ("verificando se o valor1(%d) e maior ou igual (>=)ao valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 <= valor2); // menor/igual que
	printf ("verificando se o valor1(%d) e menor ou igual (<=) ao valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 != valor2); // diferente de
	printf ("verificando se o valor1(%d) e diferente (!=) do valor2(%d): %d\n", valor1, valor2, resultado);
	return 0;
}