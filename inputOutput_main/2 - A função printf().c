#include <stdio.h>

int main (void){

/*

	-programa mostrando as diferentes saídas de printf
	-o caractere (\) é chamada de caractere de escape
Ele indica que printf deve fazer algo diferente do normal
Ao encontrar a barra invertida, esta função verifica o próximo caractere e o combina com a barra invertida para formar uma 
sequência de escape

	-o caractere (\) seguido da letra (n) indica quebra de linha (\n)
	-o caractere (\) seguido da letra (t) indica uma tabubalção horizontal (\t)
	-o caractere (\) seguido da letra (r) indica Carriage Return. Coloca o cursor no início da linha atual (\r)
	-o caractere (\) seguido da letra (a) faz uma campainha sonora (\a)
	-o caractere (\) seguido do caractere (\) imprime um caractere de barra invertida (\\)
	-o caractere (\) seguido do caractere (") imprime um caractere de aspas duplas (\")
	
*/

    printf ("caracteres: %c | ANSI: %c\n", 'a', 65);
	printf ("decimais: %d %ld\n", 1997, 65000000L);
	printf ("precedentes com espacos em branco: %10d\n", 100);
	printf ("precedentes com 0s: %d010\n", 666);
	printf ("alguns radicais diferentes: %d | %x | %o | %#x | %#o\n", 100, 100, 100, 100, 100);
	printf ("numeros de ponto flutuante: %4.2f | %+.0e | %E\n", 3.1416, 3.1416, 3.1416);
	printf ("truques de tamanho: %*d\n", 5, 10);
	printf ("%s\n", "uma string");
}