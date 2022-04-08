/*
Crie um programa usando if/else que exibe se
um dia é útil, final de semana ou inválido.
1 a 5 = Segunda à sexta.
6 e 7 = Sábado e domingo.
*/

#include <stdio.h>

int main(void) {
  
  printf("\nDigite o número equivalente ao dia: ");
  int dia;
  scanf ("%i", &dia);

  if (dia >= 1 && dia <= 5)
    printf("\nO dia digitado é dia útil.");

  else if (dia == 6 || dia == 7)
    printf("\nO dia digitado é final de semana.");

  else
    printf("\nO dia digitado é inválido.");

  return 0;
  
}
