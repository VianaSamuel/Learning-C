/*
Faça um procedimento que preencha 2 matrizes, A (4 x 6) e B (4 x 6). Faça uma função para
cada uma das situações a seguir, que recebe duas matrizes preenchidas, calcula e retorna
as matrizes indicadas:
  a) uma matriz S que seja a soma de A e B.
  b) uma matriz D que seja a diferença de A e B.
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar
o seu uso. Escreva as matrizes resultantes do acionamento de cada uma das funções.
*/

#include <stdio.h>

void linha(){
  printf("\n-------------------\n");
}

void soma(int mA[4][6], int mB[4][6]){
  int S[4][6];
  
  linha();
  printf("Matriz SOMA:");
  linha();
  int linS = 0, colS = 0;
  while (colS < 6) {
    if (linS < 4) {
      for (; linS < 4; linS++) {
        S[linS][colS] = mA[linS][colS] + mB[linS][colS];  
        printf("Linha %d Coluna %d: %d\n", linS + 1, colS + 1, S[linS][colS]);
      }
    }
    else {
      linS = 0;
      colS++;
    }
  }
}

void diferenca(int mA[4][6], int mB[4][6]){
  int D[4][6];
  
  linha();
  printf("Matriz DIFERENÇA:");
  linha();
  int linD = 0, colD = 0;
  while (colD < 6) {
    if (linD < 4) {
      for (; linD < 4; linD++) {
        D[linD][colD] = mA[linD][colD] - mB[linD][colD];  
        printf("Linha %d Coluna %d: %d\n", linD + 1, colD + 1, D[linD][colD]);
      }
    }
    else {
      linD = 0;
      colD++;
    }
  }
}

int main(void) {
  int A[4][6];
  int B[4][6];

  linha();
  printf("Matriz A:");
  linha();
  int linA = 0, colA = 0;
  while (colA < 6) {
    if (linA < 4) {
      for (; linA < 4; linA++) {
        A[linA][colA] = linA + 5;  
        printf("Linha %d Coluna %d: %d\n", linA + 1, colA + 1, A[linA][colA]);
      }
    }
    else {
      linA = 0;
      colA++;
    }
  }

  linha();
  printf("Matriz B:");
  linha();
  int linB = 0, colB = 0;
  while (colB < 6) {
    if (linB < 4) {
      for (; linB < 4; linB++) {
        B[linB][colB] = linB + 1;  
        printf("Linha %d Coluna %d: %d\n", linB + 1, colB + 1, B[linB][colB]);
      }
    }
    else {
      linB = 0;
      colB++;
    }
  }

  soma(A, B);
  diferenca(A, B);

  return 0;
}