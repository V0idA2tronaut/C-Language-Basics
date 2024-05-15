#include <stdio.h>

int main (){
	int seconds; // declaração de variáveis
	
/*
	-Converter segundos para minutos e horas, se possível
*/

	printf ("\n Entre com um valor inteiro em segundos");
	scanf ("%d", &seconds);	
	printf ("\n Horas: %d | Minutos: %d | Segundos: %d", seconds/3600, (seconds/60)%60, seconds%60);
	return 0;
}