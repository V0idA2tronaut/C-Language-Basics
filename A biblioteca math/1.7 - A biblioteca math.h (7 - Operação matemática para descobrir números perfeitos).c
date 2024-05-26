#include <stdio.h>
#include <math.h>

int is_prime (unsigned long long int prime);

int main (void){
	int prime = 2, max, count = 0; // declaração de variáveis
	
/*
	-Némeros perfeitos menores que um determinado número
	-Entrada dada pelo usuario
*/

	printf ("\n Entre com um numero: ");
	scanf ("%d", &max);
	
	do{
		if (is_prime(prime) != 0){
			printf ("\n Numero perfeito: %.lf", pow(2, prime - 1) * (pow(2,prime) - 1));
			count++;
		}
		prime++;
	}while (pow(2, prime - 1) * (pow(2,prime) - 1) < max);
	
	printf ("\n Quantidade de numeros perfeitos: %d", count);
	return 0;
}

int is_prime (unsigned long long int prime){
	int i;
	
	if (prime == 2 || prime == 3) return prime;
	else for (i = 2; i < sqrt(prime); i++){
		if (prime % i != 0) return prime;
	}
	return 0;
}