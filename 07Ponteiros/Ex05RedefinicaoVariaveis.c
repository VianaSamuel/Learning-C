/*
Escreva um programa em C que declare variáveis para armazenar um valor inteiro, um
valor real e um caracter. Deve existir no programa ponteiros associados a cada um deles.
O programa deve solicitar novos dados para as variáveis e elas devem ser modificadas
usando os respectivos ponteiros. Exiba os endereços e os conteúdos de todas as variáveis
e ponteiros antes e após a alteração
*/

#include <stdio.h>

int main(void) {
  int inteiro = 10, *i = &inteiro;
  float real = 2.5, *r = &real;
  char caracter = 'a', *c = &caracter;
  
  printf("\nPrimeiro valor do inteiro: %d", *i);
  printf("\nPrimeiro valor do real: %.1f", *r);
  printf("\nPrimeiro valor do caracter: %c", *c);

  printf("\n\nDigite um novo valor para o inteiro: ");
  scanf("%d", i);

  printf("Digite um novo valor para o real: ");
  scanf("%f", r);

  printf("Digite um novo valor para o caracter: ");
  scanf("\n%c", c);

  printf("\nNovo valor do inteiro: %d", *i);
  printf("\nNovo valor do real: %.1f", *r);
  printf("\nNovo valor do caracter: %c", *c);
  
  return 0;
}