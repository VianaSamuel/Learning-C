/*
Faça um programa que leia e armazene 2 sequências de no máximo 100 inteiros cada.
Em seguida, imprima:
  - A soma de cada elemento das duas sequências, nas respectivas posições;
  - A soma de cada elemento da primeira sequência com a segunda sequência invertida.
NOTA: As sequências de entrada podem não ter o mesmo tamanho. Iguale o tamanho das
duas sequências preenchendo com zeros.
*/

#include <stdio.h>
#define TAM_MAX 100

int main(void) {
  int n, i, j, maior, c1, soma, c2, somainv, v1[TAM_MAX], v2[TAM_MAX];
  printf("\nDigite -999 para interromper. Máximo de 100 valores.\n");

  printf("\n--------------------");
  printf("\nPRIMEIRA SEQUÊNCIA:");
  printf("\n--------------------");
  for (i = 0; i < TAM_MAX; i++){
    printf("\nDigite um valor:\n");
    scanf("%d", &n);
    if (n == -999) break;
    v1[i] = n;
  }

  printf("\n-------------------");
  printf("\nSEGUNDA SEQUÊNCIA:");
  printf("\n-------------------");
  for (j = 0; j < TAM_MAX; j++){
    printf("\nDigite um valor:\n");
    scanf("%d", &n);
    if (n == -999) break;
    v2[j] = n;
  }

  if (i > j) maior = i;
  else maior = j;

  if (i < maior){
    for (i; i < maior; i++)
    v1[i] = 0;
  }
  
  if (j < maior){
    for (j; j < maior; j++)
    v2[j] = 0;
  }
  
  int inv = j - 1;

  printf("\n-----");
  printf("\nSOMA:");
  printf("\n-----\n");
  for (c1 = 0; c1 < maior; c1++){
    int soma = v1[c1] + v2[c1];
    printf("%d\n", soma);
  }

  printf("\n---------------");
  printf("\nSOMA INVERTIDA:");
  printf("\n---------------\n");
  for (c2 = 0; c2 < maior; c2++){
    int somainv = v1[c2] + v2[inv];
    printf("%d\n", somainv);
    inv--;
  }

  return 0;
}