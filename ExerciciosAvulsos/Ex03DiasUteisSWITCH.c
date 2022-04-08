/*
Crie um programa usando if/else que exibe se
um dia é útil, final de semana ou inválido.
1 a 5 = Segunda à sexta.
6 e 7 = Sábado e domingo.
*/

#include <stdio.h>

int main (void) {
   
  printf("\nDigite o número equivalente ao dia: ");
  int dia;
  scanf ("%i", &dia);

 switch (dia) {
    case 1:
    printf("\nO dia digitado é útil.");
    break;

    case 2:
    printf("\nO dia digitado é útil.");
    break;

    case 3:
    printf("\nO dia digitado é útil.");
    break;

    case 4:
    printf("\nO dia digitado é útil.");
    break;

    case 5:
    printf("\nO dia digitado é útil.");
    break;

    case 6:
    printf("\nO dia digitado é final de semana.");
    break;
   
    case 7:
    printf("\nO dia digitado é final de semana.");
    break;

    default:
    printf("\nO dia digitado é inválido.");
    break;
   }

  return 0;
  
}
