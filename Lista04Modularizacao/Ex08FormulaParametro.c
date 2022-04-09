/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo
N e retorna o valor de S, calculado segundo a fórmula abaixo:
  S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n^2 + 1)/(n + 3)
Faça um programa que leia N e imprima o valor retornado pela função.
*/

#include <stdio.h>
#include <math.h>

float formula(int n)  {

  float res = 0;

  for (int i = 1; i <= n; i++){

    float p1 = (pow(i, 2) + 1);
    float p2 = (i + 3);
    float div = (p1/p2);

    res += div;
    
  }

  return res;
  
}

int main(void) {

  int num;
  
  printf("\nFórmula a ser aplicada:\nS = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n^2 + 1)/(n + 3)\n");
  printf("\nDigite o valor de N: ");
  scanf("%d", &num);

  float resultado = formula(num);
  printf("\nResultado final:\nS = %.2f", resultado);

}
