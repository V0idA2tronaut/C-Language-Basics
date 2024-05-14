#include <stdio.h>

int main (void){
	int valor; // declaração de variá
	
/*

	-Programa para demonstrar a utilização do switch/case
	-Escolher um numero de 1 até 3
	-Qualquer outro valor retorna default no switch/case
	
*/
	printf ("\n Entre com um numero de 1 ate 3: ");
	scanf ("%d", &valor);
	
	switch (valor){
		case 1:
			prinf ("\n Voce escolheu 1\n");
			break;
		case 2:
			printf ("\n Voce escolheu 2\n");
			break;
		case 3:
			printf ("\n Voce escolheu 3\n");
			break;
		default:
			printf ("\n Voce escolheu um numero fora do padrao\n");
			break;
	}
	return 0;
}