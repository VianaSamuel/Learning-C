/*
Escreva um programa que lê uma frase e substitui a primeira letra de cada palavra pelo
seu correspondente maiúsculo. Para isso, de acordo com a tabela ASCII, basta subtrair 32
de cada elemento que deseje alterar. Lembre-se de verificar se a letra já é maiúscula.
*/

#include <stdio.h>
#include <string.h>
#define TAM_MAX 255

int main(void) {
  char frase[TAM_MAX];
  
  printf("\nDigite uma frase a seguir:\n");
  gets(frase);

  if (frase[0] >= 97 && frase[0] <= 122)
  frase[0] = frase[0] - 32;

  int i, tamanhoFrase = strlen(frase);
  
  for (i = 0; i < tamanhoFrase; i++) {
    if (frase[i] == ' ') {
      if (frase[i + 1] != ' ' && frase[i + 1] >= 97 && frase[i + 1] <= 122 && (i + 1) < tamanhoFrase)
      frase[i + 1] = frase[i + 1] - 32;
    }
  }

  printf("\nFrase com as primeiras letras de cada palavra em maiúsculo:\n");
  puts(frase);
  
  return 0;
}