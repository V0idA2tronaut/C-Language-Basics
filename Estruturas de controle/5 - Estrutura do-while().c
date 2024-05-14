#include <stdio.h>

int main (void){
	int contador = 0;
	
/*

	-programa usando a estrutura do/while
	-apenas para mostrar números
	
*/
	
	do{
		printf ("%d\n", contador);
	}while(++contador < 10);
	
	return 0;
}