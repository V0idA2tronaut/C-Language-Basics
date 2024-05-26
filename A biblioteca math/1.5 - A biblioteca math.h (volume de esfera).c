#include <stdio.h>
#include <math.h>

#define pi 3.1415926535

int main (void){
	double raio; // declaração de variáveis

/*
	-Utilizando uma variável global e calculando o volume de uma esfera
	-pi tem 10 casas
	-Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), 
pois algumas linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é outro inteiro.

*/

	printf ("\n Entre com o valor do raio da esfera: ");
	scanf ("%lf", &raio);
	printf ("\n O valor do volume da esfera: %.3lf", 4.0*pi*pow(raio,3)/3.0);
	return 0;
}