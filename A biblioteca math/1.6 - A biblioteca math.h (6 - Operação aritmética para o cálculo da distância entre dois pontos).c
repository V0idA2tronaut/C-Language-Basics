#include <stdio.h>
#include <math.h>

int main (){
	float px1, py1, px2, py2; // declaração de variáveis

/*
	-Distance between 2 points using Descartes
*/

	printf ("\n Entre com os valores de: px1, py1, px2 and py2, respectivamente\n");
	scanf ("%f %f %f %f", &px1, &py1, &px2, &py2);
	printf ("\n A distancia entre os dois pontos vale: %.2f", sqrt( pow((px2-px1),2) + pow((py2-py1),2)));
	return 0;
}