/*Escreva um programa para calcular o fatorial de um
inteiro N usando o comando for.
*/

#include <stdio.h>

int main(void) {

    printf("\nDigite o número a ser fatorado: ");
    int n;
    scanf("%d", &n);
    int f = n-1;

        for (n; f != 0; f--) {
        n = n*f; }

    printf("\nResultado da fatoração: %d.", n);

    return 0;

}
