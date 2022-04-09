/*
- Um ano não divisível por 100 e divisível por 4 é bissexto;
- Um ano divisível por 400 é bissexto;
- Os demais anos não são bissextos.

Retorne verdadeiro caso o ano ser bissexto.
Retorne falso caso o contrário.
*/

#include <stdio.h>

int main(void) {
  
  printf("\nDigite o ano: ");
  int ano;
  scanf("%i", &ano);

  if ((ano % 100 != 0 && ano % 4 == 0) || (ano % 400 == 0)) {
    printf("\nO ano é bissexto.");
  }

  else {
    printf("\nO ano não é bissexto.");
  }

  return 0;
  
}
