#include <stdio.h>

int main (void){
	int valor, i; // declarações de variáveis
	
/*
	-Apresentando o quadrado de pares entre 1 até N
*/

	printf ("\n Entre com um valor inteiro: ");
	scanf ("%d", &valor);
	
	for (i = 0; i <= valor; i++){
		if (i%2 == 0) printf ("\n %d elevado ao quadrado = %d\n", i, i*i);
	}
	return 0;
}