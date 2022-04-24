/*
Escreva uma função chamada contaVogais que recebe uma frase e retorna a
quantidade de vogais na frase. Lembre-se de contar tanto maiúsculas quanto minúsculas.
*/


#include <stdio.h>
#include <string.h>
#define TAM_MAX 255

int contaVogais(char txt[]) {
  int vogais = 0, i = 0;

  for (i; txt[i] != '\0'; i++) {
    if ((txt[i] == 'A') ||
    (txt[i] == 'E') ||
    (txt[i] == 'I') ||
    (txt[i] == 'O') ||
    (txt[i] == 'U') ||
    (txt[i] == 'a') ||
    (txt[i] == 'e') ||
    (txt[i] == 'i') ||
    (txt[i] == 'o') ||
    (txt[i] == 'u'))
    vogais++;
  }
  return vogais;
}

int main(void) {
  char texto[TAM_MAX];

  printf("\nDigite um texto a seguir:\n");
  gets(texto);

  int resultado = contaVogais(texto);

  printf("\nQuantidade de vogais no texto inserido:\n%d", resultado);
  
  return 0;
}