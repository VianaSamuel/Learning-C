/*
Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a
soma dos elementos abaixo da diagonal principal. Mostre na tela os elementos da
diagonal principal também.
*/

#include <stdio.h>

int main(void) {
  int m[4][4];
  
  int i = 0, j = 0;
  while (j < 4) {
    if (i < 4) {
      for (i; i < 4; i++) {
        m[i][j] = i + 1;
      }
    }
    else {
      i = 0;
      j++;
    }
  }

  printf("\nElementos da diagonal principal:\n");
  int auxdiag = 0;
  for (auxdiag; auxdiag < 4; auxdiag++) {
    printf("%d ", m[auxdiag][auxdiag]);
  }

  int soma = 0, lin = 1, col = 0;
  while (lin < 4) { 
    if (col < lin) {
      while (col < lin) {
        soma += m[lin][col];
        col++;
      }
    }
    else {
      col = 0;
      lin++;
    }
  }

  printf("\n\nSoma dos elementos abaixo da diagonal principal:\n%d", soma);

  return 0;
}