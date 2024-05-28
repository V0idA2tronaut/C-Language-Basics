#include <stdio.h>

int main(void){
   int next_number = 1, first_fib = 0, aux = 0, max; // declaração de variáveis

/*
	-Programa para mostrar fibonacci até um máximo
*/

   printf("\n Entre com um valor maximo: ");
   scanf("%d", &max);
    
   while(first_fib < max){ 
   	printf("%d\n", first_fib);                   
      first_fib = first_fib + aux;                 
      aux = next_number;
      next_number = first_fib;
	}
	
  return 0;
}