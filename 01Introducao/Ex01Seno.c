/*
Escreva um código para calcular o seno de um valor em graus. 
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  
  float angulo;
  printf("\nDigite o valor do ângulo, em graus:\n");
  scanf("%f", &angulo);

  float radiano = (angulo * 3.14) / 180;

  printf("\nO seno de %.1f graus é %.1f.", angulo, sin(radiano));
  
  return 0;
  
}