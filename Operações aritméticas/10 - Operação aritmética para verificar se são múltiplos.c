#include <stdio.h>

int main (void){
	int valor1, valor2; // declaração de variáveis
	
/*
	-Ler dois valores e definir se são múltiplos ou não
*/

	printf ("\n Entre com os valores: ");
	scanf ("%d %d", &valor1, &valor2);
	
	if (valor1 > valor2){
		if (valor1 % valor2 == 0) printf ("\n Multiplos");
		else printf ("\n Nao multiplos");
	}else{
		if (valor2 % valor1 == 0) printf ("\n Multiplos");
		else printf ("\n Nao multiplos");
	}
}