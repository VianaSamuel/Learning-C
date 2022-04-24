/*
Escreva uma função recursiva para verificar se uma palavra é palíndromo.
Palíndromos são palavras ou frases que podem ser lidas da esquerda para a direita ou da
direita para a esquerda. Ex: ARARA.
Dica: Note que strings podem ter quantidade par ou ímpar de caracteres.
*/

#include <stdio.h>
#include <string.h>
#define TAM_MAX 255

int inverte(char *letra, int ordemNormal, int ordemInversa) {
  if (ordemNormal >= ordemInversa) return 1;
    
  else {
    if (letra[ordemNormal] != letra[ordemInversa]) return 0;

    else return inverte(letra, ordemNormal + 1, ordemInversa - 1);
  }
}

int verificaPalindromo(char *palavra) {
  int normal = 0;
  int inversa = strlen(palavra) - 1;

  int ehPalindromo = inverte(palavra, normal, inversa);

  if (ehPalindromo == 1) printf("\nA palavra digitada é um palíndromo.");
  else printf("\nA palavra digitada não é um palíndromo.");
}

int main(void) {
  char input[TAM_MAX];
  
  printf("\nDigite uma palavra a seguir:\n");
  gets(input);

  verificaPalindromo(input);
  
  return 0;
}