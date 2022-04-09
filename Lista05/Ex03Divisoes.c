/*
Faça uma função recursiva que calcula a divisão usando subtrações sucessivas:
int divisao (int numerador, int denominador)
Faça um programa principal que leia dois números,
acione a função e exiba o resultado gerado.
*/

#include <stdio.h>

int divisao(int numerador, int denominador) {

  if (numerador < denominador) return 0;
  else return divisao(numerador - denominador, denominador) + 1;
  
}

int main(void) {

  int nmr, dnm;

  printf("\nDigite o numerador: ");
  scanf("%d", &nmr);

  printf("Digite o denominador: ");
  scanf("%d", &dnm);

  int resultado = divisao(nmr, dnm);
  
  printf("\nResultado da divisão, desconsiderando o resto: %d", resultado);
  
  return 0;
  
}
