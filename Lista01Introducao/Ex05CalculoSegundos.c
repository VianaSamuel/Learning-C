/*
Leia um valor inteiro em segundos e imprima o equivalente em horas, minutos e segundos.
*/

#include <stdio.h>

int main(void) {
  
  printf("\nDigite o número em segundos: ");
  int segundos;
  scanf("%i", &segundos);

  int minutos = segundos/60;
  int horas = minutos/60;

  printf("\nValor equivalente em horas: %i", horas);
  printf("\nValor equivalente em minutos: %i", minutos);
  printf("\nValor equivalente em segundos: %i", segundos);
  
  return 0;
  
}
