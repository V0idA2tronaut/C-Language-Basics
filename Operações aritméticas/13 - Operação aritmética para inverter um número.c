#include <stdio.h>
#include <stdlib.h>

int main (void){
	// declarações de variáveis
   int numero;
   int digito_invertido;

/*
	-Programa para inverter um determinado numero
*/
   
   printf("\n Digite um numero: ");
   scanf("%d", &numero);
   printf("\n Numero invertido: ");
   
   while (numero != 0){
      digito_invertido = numero % 10;
      printf("%d", digito_invertido);
      numero = numero / 10;
   }
   
   return 0;
}