#include <stdio.h>
#include <math.h>

void exp_log_functions (double);

int main (void){
	double value; // declarações de variáveis
	
/*
	-Experimentando com funções da math.h
	-Funções logarítmicas
	-Funções exponenciais
*/

	printf ("\n De um valor para calcular a funcao logaritmica, funcao logaritmica de base 10 e a funcao exponencial\n");
	scanf ("%lf", &value);
	exp_log_functions(value);
	return (0);
}

void exp_log_functions (double value){
	printf ("\n O valor da funcao exponencial: %.3lf\n", exp(value));
	printf ("\n O valor da funcao logaritmica: %.3lf\n", log(value));
	printf ("\n O valor da funcao logaritmica de base 10: %.3lf\n", log10(value));
}