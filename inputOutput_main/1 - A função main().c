#include <stdio.h>

int main (int argc, char **argv[]){
    int a;
    printf ("\n numero de parametros: %d\n", argc);
    for (a = 0; a < argc; a++) printf ("argv[%d]: %c\n", a, argv[a]);
    return (0);
}