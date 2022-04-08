/*
Escreva um programa para calcular o fatorial de um
inteiro N usando o comando while.
*/

#include <stdio.h>

int main(void) {
  
    printf("\nDigite o número a ser fatorado: ");
    int n;
    scanf("%d", &n);
    int f = n-1;

        while (f != 0) {
        n = n*f;
        f--; }

    printf("\nResultado da fatoração: %d.", n);
  
    return 0;
  
}
