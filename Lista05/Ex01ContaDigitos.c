/*
Faça uma função em C para contar os dígitos de um determinado número usando
recursão. Faça um programa principal que leia um número, acione a função e
exiba o resultado gerado.
*/

#include <stdio.h>

int contaDigitos(int n) {

  if (n < 10) return 1;
  else return 1 + contaDigitos(n/10);
  
}

int main(void) {

  int num;
  printf("\nDigite um número para que seus dígitos sejam contados: ");
  scanf("%d", &num);

  int resultado = contaDigitos(num);
  printf("\nO número %d possui %d dígitos.", num, resultado);
  
  return 0;
  
}
