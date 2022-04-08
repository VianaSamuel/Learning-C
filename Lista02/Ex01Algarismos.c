/*
Escreva um programa que solicita ao usuário um número
positivo inteiro de 4 algarismos, verifica se o valor possui 4 algarismos e imprime na tela o seu valor
invertido.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  
  printf("\nDigite um número de 4 algarismos, de forma espaçada: ");
  int d1, d2, d3, d4;
  scanf("%d %d %d %d", &d1, &d2, &d3, &d4);

  int total;
  total = (d1 * pow(10, 3)) + (d2 * pow(10, 2)) + (d3 * pow(10, 1)) + (d4 * pow(10, 0));

  if (total > 999 && total < 10000) {
    printf("\nO valor invertido do número digitado é %i%i%i%i.", d4, d3, d2, d1);
  }

  else {
    printf("\nO número digitado é inválido.");
  }
  
  return 0;
  
}
