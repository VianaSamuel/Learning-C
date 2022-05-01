/*
Faça um algoritmo que leia e armazene uma sequência de no máximo 50 inteiros e
imprima na forma de tabela os números pares presentes na sequência, bem como o
valor dos seus índices no vetor.
*/

#include <stdio.h>
#define TAM_MAX 50

void linha(){
  printf("\n-------------------\n");
}

int main(void) {
  int n, i, j, v[TAM_MAX];
  printf("\nDigite -999 para interromper. Máximo de 50 valores.\n");

  for (i = 0; i < TAM_MAX; i++) {
    printf("\nDigite um valor:\n");
    scanf("%d", &n);
    if (n == -999) break;
    v[i] = n;
  }

  linha();
  printf("Números pares:");
  linha();
  printf("Valor\t\tÍndice\n");
  
  for (j = 0; j < i; j++) {
    if (v[j] % 2 == 0)
      printf("%d\t\t\t%d\n", v[j], j);
  }
  
  return 0;
}