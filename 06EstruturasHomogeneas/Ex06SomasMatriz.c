/*
Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que receba
uma matriz preenchida, calcule e retorne cada uma das somas a seguir (uma função para
cada letra abaixo):
  a) da linha 4 de M
  b) da coluna 2 de M
  c) da diagonal principal
  d) da diagonal secundária
  e) de todos os elementos da matriz.
*/

#include <stdio.h>

int a(int matriz[5][5]){
  int i = 0, soma = 0;

  for (; i < 5; i++) {
    soma += matriz[4][i];
  }

  return soma;
}

int b(int matriz[5][5]){
  int i = 0, soma = 0;

  for (; i < 5; i++){
    soma += matriz[i][2];
  }

  return soma;
}

int c(int matriz[5][5]){
  int i = 0, soma = 0;

  for (; i < 5; i++){
    soma += matriz[i][i];
  }

  return soma;
}

int d(int matriz[5][5]){
  int i = 0, soma = 0;

  for (; i < 4; i++){
    soma += matriz[i+ 1][i];
  }
  
  return soma;
}

int e(int matriz[5][5]){
  int lin = 0, col = 0, soma = 0;

  while (col < 5)
  if (lin < 5)
    for (; lin < 5; lin++) {
      soma += matriz[lin][col];
    }
  else{
    lin = 0;
    col++;
  }

  return soma;
}

int main(void) {
  int M[5][5];

  printf("\nMatriz:\n\n");
  int i = 0, j = 0;
  while (j < 5) {
    if (i < 5) {
      for (; i < 5; i++) {
        M[i][j] = i + 1;  
        printf("Linha %d Coluna %d: %d\n", i, j, M[i][j]);
      }
    }
    else {
      i = 0;
      j++;
    }
  }

  int resa = a(M);
  int resb = b(M);
  int resc = c(M);
  int resd = d(M);
  int rese = e(M);

  printf("\na) Soma da linha 4 de M:\n%d\n", resa);
  printf("\nb) Soma da coluna 2 de M:\n%d\n", resb);
  printf("\nc) Soma da diagonal principal:\n%d\n", resc);
  printf("\nd) Soma da diagonal secundária:\n%d\n", resd);
  printf("\ne) Soma de todos os elementos da matriz:\n%d\n", rese);
  
  return 0;
}