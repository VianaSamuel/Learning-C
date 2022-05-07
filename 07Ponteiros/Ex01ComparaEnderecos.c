/*
Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis.
O programa deve comparar os endereços das variáveis e exibir o maior deles.
*/

#include <stdio.h>

int main(void) {
  int x = 50, y = 100, *p, *q;
  p = &x;
  q = &y;

  printf("\nValor de X: %d\n", *p);
  printf("Endereço de X: %d\n", p);
  
  printf("\nValor de Y: %d\n", *q);
  printf("Endereço de Y: %d\n", q);

  if(p > q)
    printf("\nO endereço de X é o maior.");
  else
    printf("\nO endereço de Y é o maior.");
  
  return 0;
}