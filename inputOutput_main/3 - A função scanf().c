#include <stdio.h>

int main (){
    int i;
	char string[80];
/*

	-Programa que mostra os diferens usos de scanf()

*/

	printf ("digite seu nome: ");
	scanf ("%79s", &string);
	printf ("digite sua idade: ");
	scanf ("%d", &i);
	printf ("seu nome: %s| sua idade: %d\n", string, i);
	printf ("digite um numero hexadecimal: ");
	scanf ("%x", &i);
	printf ("voce digitou %#x (%d)\n", i, i);
	return 0;
}