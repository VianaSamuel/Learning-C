/*
Faça um programa que receba dez números e verifique se eles são divisíveis por:
  - 3 e 9 (ao mesmo tempo);
  - 2;
  - 5.
Caso algum número não seja divisível por nenhum desses
números, mostre a mensagem “O número não é divisível pelos valores”. Apresente
também, ao final, a quantidade de números divisíveis por 3 e 9, por 2 e por 5.
*/

#include <stdio.h>

int main(void) {
  
  int n;
  int i = 0, d39 = 0, d2 = 0, d5 = 0, invalidos = 0;
  printf("\nDigite 10 números para serem analisados a seguir: \n\n");

  for (i; i <= 10; i++) {
    scanf("%d", &n);
      if (n % 9 == 0) {
        printf("%d é divisível por 3 e 9, simultaneamente.\n", n);
        d39++;
      }
      if (n % 2 == 0) {
        printf("%d é divisível por 2.\n", n);
        d2++;
      }
      if (n % 5 == 0) {
        printf("%d é divisível por 5.\n", n);
        d5++;
      }
      if (n % 9 != 0 && n % 2 != 0 && n % 5 != 0) {
        printf("%d não é divisível pelos valores/critérios específicos.\n", n);
        invalidos++;
      }
  }

  printf("\nQuantidade de números divisíveis por 3 e 9, simultaneamente: %d.", d39);
  printf("\nQuantidade de números divisíveis por 2: %d.", d2);
  printf("\nQuantidade de números divisíveis por 5: %d.", d5);
  printf("\nQuantidade de números inválidos: %d.", invalidos);
  
  return 0;
  
}
