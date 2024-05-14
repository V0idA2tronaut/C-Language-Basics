#include <stdio.h>

int main (void){
	int valor1 = 10, valor2 = 5, resultado; // declaração de variáveis
	
/*

	-programa para demonstrar operadores lógicos e operadores lógicos bit a bit
	
*/

	resultado = (valor1 && valor2); // E lógico
	printf ("operacao relacional AND (&&) entre valor1(%d) e valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 || valor2); // OU lógico
	printf ("operacao relacional OR (||) entre valor1%d e valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 && valor2) || !valor1; // E lógico, seguido de um OU lógico e uma negação lógica
	printf ("combinacao de operadores logicos entre valor1(%d) e valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 & valor2); // Operador E bit a bit
	printf ("operador bit-a-bit AND(&) entre valor1(%d) e valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 | valor2); // Operador OU bit a bit
	printf ("operador bit-a-bit OR(|) entre valor1(%d) e valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (valor1 ^ valor2); // Operador XOR bit a bit
	printf ("operador bit-a-bit XOR(^) entre valor1(%d) e valor2(%d): %d\n", valor1, valor2, resultado);
	
	resultado = (~valor1); // Operador de negação bit a bit
	printf ("operador bit-a-bit NOT(~) no valor1(%d): %d\n", valor1, resultado);
	
	resultado = (valor1 << 1); // Deslocamento esquerda bit a bit
	printf ("operador bit-a-bit de deslocamento a esquerda (<<) no valor1(%d): %d\n", valor1, resultado);
	
	resultado = (valor1 >> 1); // Deslocamento direita bit a bit
	printf ("operador bit-a-bit de deslocamento a direita (>>) no valor1(%d): %d\n", valor1, resultado);
	return 0;
}