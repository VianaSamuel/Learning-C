/*
Faça um programa que imprima todos os elementos da série de Fibonacci menores que L.
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
    printf("\nElementos da série de Fibonacci menores que %d:\n0, 1", l);
    while (s2 < l){
      r = s1 + s2;
      if (r > l) {
        break;
      }
      printf(", %d", r);
      s1 = s2;
      s2 = r;
    }
  }
  
  return 0;
  
}
