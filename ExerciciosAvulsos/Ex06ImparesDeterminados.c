/*
Escreva um programa que leia dois inteiros N e M,
e imprima todos os ímpares maiores que N e menores
que M.
*/

#include <stdio.h>

int main(void) {

   int n = 0, m;
   printf("\nDigite o valor de N: ");
   scanf("%d", &n);
   int i = n - 1;
   printf("\nDigite o valor de M: ");
   scanf("%d", &m);
   printf("\n");

   while (i < m) {
      i++;
      if(i % 2 == 0) {
         continue;
      }
      printf("%d ", i);
   }

  return 0;

}
