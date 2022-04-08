/*
Escreva uma função que recebe por parâmetro um valor inteiro e
positivo N, e retorne o valor de S:
  S = 1 + (1/1!) + (1/2!) + (1/3!) + ... + (1/N!)
Faça um programa que leia N e imprima o valor retornado pela função.
*/

#include <stdio.h>

float formula(int n) {

  int i;
  float fat = 1, res = 1;

  for (i = 1; i <= n; i++) {
    fat *= (1.0/i);
    res += fat;
  }

  return res;
  
}

int main(void) {

  int num;
  
  printf("\nFórmula a ser aplicada:\nS = 1 + (1/1!) + (1/2!) + (1/3!) + ... + (1/N!)\n");
  printf("\nDigite o valor de N: ");
  scanf("%d", &num);

  float resultado = formula(num);
  printf("\nResultado final:\nS = %.2f", resultado);
  
}
