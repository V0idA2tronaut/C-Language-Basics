#include <stdio.h>
#include <math.h>

void power_functions (double);

int main (void){
	double value; // declaração de variáveis
	
/*
	-Experimentando funções da biblioteca math.h
	-Funções potenciais
*/

	printf ("\n Entre com um valor para os calculos: ");
	scanf ("%lf", &value);
	power_functions(value);
	return (0);
}

void power_functions (double value){
	printf ("\n Elevando o valor %lf ao quadrado: %.2lf", value, pow(value,2));
	printf ("\n Tirando a raiz quadrada de %lf: %.2lf", value, sqrt(value));
	printf ("\n Tirando a raiz cubica de %lf: %.2lf", value, cbrt(value));
}