/*
Considere que os valores (inteiros e positivos) para as variáveis a, b e c
correspondem aos lados de um triângulo retângulo com catetos a e b, e hipotenusa c.

Determinar a área do triângulo pela fórmula:

área = raiz de s*(s-a)*(s-b)*(s-c),
onde s = (a+b+c)/2
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  
  int a, b, c;
  
  printf("\nDigite o valor do lado A do triângulo: ");
  scanf("%i", &a);
  
  printf("\nDigite o valor do lado B do triângulo: ");
  scanf("%i", &b);

  printf("\nDigite o valor do lado C do triângulo: ");
  scanf("%i", &c);

  float s, area;
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("\nO valor da área do triângulo é %.2f.", area);
    
  return 0;
  
}
