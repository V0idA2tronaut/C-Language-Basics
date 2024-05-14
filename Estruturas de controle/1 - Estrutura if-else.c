#include <stdio.h>

int main (void){
	int valor1, valor2; // declaração de variáveis
	
/*

	-Programa para demonstrar os controladores if/else
	-O usuário insere um número e verifica qual é o maior
	
*/

	printf ("\n Entre com o primeiro valor: ");
	scanf ("%d", &valor1);
	printf ("\n Entre com o segundo valor: ");
	scanf ("%d", &valor2);
	
	if (valor1 < valor2){
		printf ("\n Valor1 e menor que valor2");
	}else{
		printf ("\n Valor1 e maior que valor2");
	}
	
	return 0;
}