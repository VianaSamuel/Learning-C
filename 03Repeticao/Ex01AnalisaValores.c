/*
Fazer um programa que leia uma seqüência de valores inteiros fornecida pelo usuário
em uma linha de entrada e conte o número de valores positivos, negativos e zeros.
*/

#include <stdio.h>

int main(void) {
  
  int i, n;
  int positivos = 0, negativos = 0, zeros = 0;
  printf("\nDigite quantos números você deseja inserir: ");
  scanf("%d", &i);
  printf("\nDigite os números a seguir: \n");

  while (i>0) {
    i--;
    scanf("%d", &n);
      if (n>0)
        positivos++;
      if (n<0)
        negativos++;
      if (n==0)
        zeros++;
  }

  printf("\nQuantidade de números positivos: %d.", positivos);
  printf("\nQuantidade de números negativos: %d.", negativos);
  printf("\nQuantidade de zeros: %d.", zeros);
  
  return 0;
  
}
