/*
Escreva um programa em C que lê 100 números de um
arquivo binário e escreve os ímpares na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void linha(){
  printf("\n----------------\n");
}

int main(void) {
  FILE *pArquivo;
  int i;

  pArquivo = fopen("arquivo.bin", "wb");
  int num[100];
  for (i = 0; i < 100; i++){
    num[i] = rand() % 100;
  }
  fwrite(num, sizeof(int), 100, pArquivo);
  fclose(pArquivo);

  pArquivo = fopen("arquivo.bin", "rb");
  fread(num, sizeof(int), 100, pArquivo);
  printf("\nNúmeros ímpares:");
  linha();
  for (i = 0; i < 100; i++){
    if (num[i] % 2 != 0){
      printf("%d\n", num[i]);
    }
  }
  fclose(pArquivo);
  
  return 0;
}