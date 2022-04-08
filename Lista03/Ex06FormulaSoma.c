/*
Escreva um algoritmo que lê um valor N inteiro e positivo e que calcula a seguinte soma:
  S = 1 + (1/2) + (1/3) + (1/4) + ... + (1/N)
O algoritmo deve escrever cada termo gerado e o valor final de S.
*/

#include <stdio.h>

int main(void) {

  float n, i = 1, soma = 1;

	printf("\nFórmula a ser aplicada:\nS = 1 + (1/2) + (1/3) + (1/4) + ... + (1/N)\n");
  printf("\nDigite o valor de N: ");
  scanf("%f", &n);

  while (i != n) {
    printf("\n%.1f", soma);
    i++;
    soma = soma + (1 / i);
  }

  printf("\n\nResultado final:\nS = %.2f", soma);
  
  return 0;

}
