/*
Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0:
  S = 1/1! + 1/2! + 1/3! + ... + 1/N!
  double serie (int n)
Faça um programa principal que leia um número, acione a função e exiba o resultado
gerado.
*/

#include <stdio.h>

double serie(int n){

  int i;
  double fat, calc, res = 0;
  
  if (n > 0) {
    
    for (i = 1; i <= n; i++) {
      
      fat = i * serie(i - 1);
      calc = (1.0 / fat);
      res += calc;
      
    }
    
  }
    
  else return res = 1;

  return res;

}

int main(void) {

  int num;
  
  printf("\nFórmula a ser aplicada: S = 1/1! + 1/2! + 1/3! + ... + 1/N!");
  printf("\n\nDigite o valor de N: ");
  scanf("%d", &num);

  double resultado = serie(num);

  printf("\nResultado: S = %.1f", resultado);
  
  return 0;
  
}