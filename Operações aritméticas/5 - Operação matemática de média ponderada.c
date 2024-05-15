#include <stdio.h>

int main (){
	int value1, value2, value3; // declaração de variáveis

/*
	-Calculando a média de 3 notas com peso 2, 3 e 5, respectivamente
*/

	printf ("\n Insira 3 valores inteiros");
	scanf ("%d %d %d", &value1, &value2, &value3);
	printf ("o valor da media ponderada: %d", (value1 * 2 + value2 * 3 + value3 * 5)/10);
	return 0;
}