#include <stdio.h>
#include <math.h>

#define PI 3.14159

void trig_functions (double, double, double);

int main (void){
	double seno, cosseno, tangente; // definção de variáveis
	
/*
	-Demonstrando algumas funções da biblioteca math.h
	-Utiliza-se chamadas de função próprias da biblioteca
	-Utiliza-se chamadas de função próprias
*/

	printf ("\n Entre com valores (em graus) de angulos para calcular seno, cosseno e tangete\n");
	scanf ("%lf %lf %lf", &seno, &cosseno, &tangente);
	trig_functions(seno, cosseno, tangente);
	return 0;
}

void trig_functions (double seno, double cosseno, double tangente){
	printf ("\n Valor do seno do angulo %.3lf: %.3lf\n", seno, sin(seno * PI/180));
	printf ("\n Valor do cosseno do angulo %.3lf: %.3lf\n", cosseno, cos(cosseno * PI/180));
	printf ("\n Valor da tangente do angulo %.3lf: %.3lf\n", tangente, tan(tangente * PI/180));
}