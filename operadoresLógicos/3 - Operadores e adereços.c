#include <stdio.h>

int main (void){
	int valor1 = 5; // declaração de variável
	int *valor2 = &valor1; // ponteiro *valor2 que recebe o endereço de valor1
	
/*

	-programa que demonstra os operadores (&) e (*)
	-(&) retorna o endereço de uma variável
	-(*) retorna a variável que armazena o endereço
	-% são placeholders, pontos que serão subtituídos por alguma outra coisa
O (%p) representa o endereço de um ponteiro, que nada mais é dizer ao printf() para interpretar o valor recebido pela funcao
como um endereço

*/
	
	printf ("valor1 tem %d\n", valor1);
	printf ("o endereco de valor1 e %p\n", (void*)&valor1);
	printf ("o valor armazenado no ponteiro valor2 e %p\n", (void*)valor2);
	printf ("o valor acessado atraves do ponteiro valor2 e %d\n", *valor2);
	
	*valor2 = 7;
	printf ("novo valor de valor1 e: %d\n", valor1);
	return 0;
}