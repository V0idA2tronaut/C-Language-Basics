#include <stdio.h>

int main (void){
	int x, y; // declaração de variáveis

/*
	-Dada uma coordenada de pontos, dizer em qual quadrante se localiza no plano de Descartes
*/

	printf ("\n Entre com dois valores inteiros");
	scanf ("%d %d", &x, &y);
	
	if (x > 0 && y > 0) printf ("Q1");
	else if (x < 0 && y > 0) printf ("Q2");
	else if (y < 0 && x > 0) printf ("Q4");
	else printf ("Q3");
	return 0;
}