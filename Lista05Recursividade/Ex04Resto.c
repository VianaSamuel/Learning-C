/*
Faça uma função recursiva que calcula o resto da divisão usando subtrações sucessivas:
int resto (int numerador, int denominador)
Faça um programa principal que leia dois números, acione a função e exiba o resultado gerado.
*/

#include <stdio.h>

int resto(int numerador, int denominador){

  if (numerador < denominador) return numerador;
  else return resto(numerador - denominador, denominador);
  
}

int main(void) {
  
  int nmr, dnm;

  printf("\nDigite o numerador: ");
  scanf("%d", &nmr);

  printf("Digite o denominador: ");
  scanf("%d", &dnm);

  int resultado = resto(nmr, dnm);
  
  printf("\nResto da divisão: %d", resultado);
  
  return 0;
  
}
