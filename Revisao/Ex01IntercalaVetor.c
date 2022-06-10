/*
Escreva uma função que recebe dois vetores unidimensionais A e B, ambos de tamanho n,
aloque dinamicamente um vetor C de tamanho 2*n, preencha o vetor C intercalando os
valores de A e B e retorne o ponteiro para o vetor C. Na função principal, gere valores
aleatórios menores que 10 para os vetores A e B (use a função rand() % 10), chame a
sua função e em seguida imprima os 3 vetores.
*/

#include <stdio.h>
#include <stdlib.h>
#define N 4

void linha(){
  printf("\n-------------------------------------\n");
}

void preenche_vetor(int *A, int *B, int *C){
  int i, j = 0, k = 0;
  for (i = 0; i < (2 * N); i++){
    if (i % 2 == 0){
      C[i] = A[j];
      j++;
    }
    else{
      C[i] = B[k];
      k++;
    }
  }
  linha();
  printf("Vetor C:");
  linha();
  for (i = 0; i < (2 * N); i++){
    printf("%d\t", C[i]);
  }
}

int main(void) {
  int A[N], B[N], *C;
  int i;

  for (i = 0; i < N; i++){
    A[i] = rand() % 10;
    B[i] = rand() % 10;
  }

  linha();
  printf("Vetor A:");
  linha();
  for (i = 0; i < N; i++){
    printf("%d\t", A[i]);
  }

  printf("\n\n");
  
  linha();
  printf("Vetor B:");
  linha();
  for (i = 0; i < N; i++){
    printf("%d\t", B[i]);
  }

  printf("\n\n");

  C = (int *) malloc((2 * N) * sizeof(int));
  preenche_vetor(A, B, C);

  return 0;
}