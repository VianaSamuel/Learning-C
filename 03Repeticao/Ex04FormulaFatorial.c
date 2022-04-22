/*
Escreva um algoritmo que lê um valor N, inteiro e positivo,
e que calcule e escreva o valor de E:
  E = 1 + (1/1!) + (1/2!) + (1/3!) + ... + (1/N!)
*/

#include <stdio.h>

int main(void) {

  int i, n;
  float fat = 1.0, resultado = 1.0;
  
  printf("\nFórmula a ser aplicada:\nE = 1 + (1/1!) + (1/2!) + (1/3!) + ... + (1/N!)\n");
  printf("\nDigite o valor de N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    fat *= (1.0/i);
    resultado += fat;
  }

  printf("\nResultado final:\nE = %.2f", resultado);
  
  return 0;
  
}
