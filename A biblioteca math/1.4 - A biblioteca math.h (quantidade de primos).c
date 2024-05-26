#include <stdio.h>
#include <math.h>

int main (void){
	double value; // declaração de variáveil
	printf ("\n Insira um valor inteiro maior ou igual que 17");

/*
	-Calculando o número aproximado de primos com a fórmula de Schoenfeld e Rosser
*/

	scanf ("%lf", &value);
	printf ("%.1lf | %.1lf", value/log(value), 1.25506*(value/log(value)));
	return 0;
}