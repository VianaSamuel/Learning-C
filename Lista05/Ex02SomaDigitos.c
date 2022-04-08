/*
Faça uma função para encontrar a soma dos dígitos de um número usando recursão.
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado.
*/

#include <stdio.h>

int somaDigitos(int n) {

  if (n != 0) return; 
  else return n += somaDigitos(n/10);

  return n;
  
}

int main(void) {

  int num;
  printf("\nDigite um número para que seus dígitos sejam somados: ");
  scanf("%d", &num);

  int resultado = somaDigitos(num);
  printf("\nA soma dos dígitos de %d resulta em %d.", num, resultado);
  
  return 0;
  
}
