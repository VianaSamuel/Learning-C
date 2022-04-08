/*
Faça um programa que imprima os L primeiros elementos da série de Fibonacci.
Por exemplo, se o usuário digitou o número 40, deverão ser apresentados os
40 números da sequência na tela.
*/
  
#include <stdio.h>

int main(void) {
  
  int l, s1 = 0, s2 = 1, r;
  printf("\nDigite o número desejado de termos da sequência Fibonacci:\n");
  scanf("%d", &l);

  if (l <= 1) {
    printf("\nTermo inválido.");
  }

  else {
    printf("\nSequência dos primeiros %d elementos da série de Fibonacci:\n0, 1", l);
    while (s2 < l){
      r = s1 + s2;
      printf(", %d", r);
      s1 = s2;
      s2 = r;
    }
  }
  
  return 0;
  
}
