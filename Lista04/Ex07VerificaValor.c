/*
Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo.
A função deve retornar um valor lógico (true ou false). Faça um programa que lê N
números e para cada um deles exibe uma mensagem informando se ele é positivo ou não,
dependendo se foi retornado verdadeiro ou falso pela função.
*/

#include <stdio.h>

int verificaValor(int num) {
  
  if (num >= 0)
    return 1;
  if (num < 0)
    return 0;
  
}

int main(void) {
  
  int n, numero, i = 0;
  printf("\nDigite quantos números serão verificados: ");
  scanf("%d", &n);

  for (i; i < n; i++) {
      printf("\nDigite um número: ");
      scanf("%d", &numero);

      int resultado = verificaValor(numero);

      if (resultado == 1)
        printf("O número digitado é positivo.\n");
      else
        printf("O número digitado é negativo.\n");
    }
  
}
