/*
Escreva um código que:
a) usa a função pow da biblioteca math.h para calcular
e imprimir quantos valores um binário de 4 bits comporta.

b) recebe do usuário 4 valores referentes aos bits de um binário
e imprime o decimal equivalente.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  
  int comporta = pow(2, 4);
  printf("\nUm binário de 4 bits comporta até %i valores.\n", comporta);
  
  printf("\nDigite um número binário de até 4 dígitos.\n");
  
  int b1, b2, b3, b4;
  printf("Digite o primeiro dígito: ");
  scanf("%i", &b1);
  printf("Digite o segundo dígito: ");
  scanf("%i", &b2);
  printf("Digite o terceiro dígito: ");
  scanf("%i", &b3);
  printf("Digite o quarto dígito: ");
  scanf("%i", &b4);

  int resultado = (b1 * pow(2, 3)) + (b2 * pow(2, 2)) + (b3 * pow(2, 1)) + (b4 * pow(2, 0));

  printf("\nO número em binário: %i%i%i%i", b1, b2, b3, b4);
  printf("\nO número em decimal: %i", resultado);
  
  return 0;
  
}
