/*
Faça um algoritmo que leia o ano de nascimento de uma pessoa
e calcule sua idade. Verifique se o usuário já fez aniversário.
Verifique também se o usuário possui idade para conseguir uma CNH.
*/

#include <stdio.h>

int main(void) {
  
  printf("\nDigite o ano de seu nascimento: ");
  int nasc;
  scanf("%i", &nasc);

  printf("\nDigite o ano atual: ");
  int atual;
  scanf("%i", &atual);

  printf("\nVocê já fez aniversário nesse ano? ( S / N ): ");
  char resp;
  scanf(" %c", &resp);

  int calc = (atual - nasc);

  if (resp == 's')
    printf("\nVocê tem %i anos.", calc);

  if (resp == 'n')
    printf("\nVocê tem %i anos.", calc--);

  if (calc >= 18)
   printf("\nVocê pode tirar a Carteira Nacional de Habilitação.");
  else
   printf("\nVocê não pode tirar a Carteira Nacional de Habilitação.");

  return 0;

}
