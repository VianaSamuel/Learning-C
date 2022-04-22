/*
Escreva um programa que receba de entrada a altura,
o peso e o sexo de uma pessoa e informe se ela está acima
do seu peso ideal. Informe também o peso ideal para a sua altura.

Homens: (72.7 * altura) - 58
Mulheres: (62.1 * altura) - 44.7
*/

#include <stdio.h>

int main(void) {
  
  float altura, peso;
	char sexo;
	printf("\nDigite sua altura: ");
  scanf("%f", &altura);
	printf("\nDigite seu peso: ");
	scanf("%f", &peso);
	printf("\nDigite seu sexo ( M / F ): ");
	scanf(" %c", &sexo);

  if (sexo == 'm') {
    
      float ideal = (72.7 * altura) - 58;
    
      if (peso <= ideal) {
        printf("\nAbaixo do peso ideal.");
        printf("\nO peso ideal é %.1f.", ideal);
      }
    
      else if (peso > ideal) {
      printf("\nAcima do peso ideal.");
      printf("\nO peso ideal é %.1f.", ideal);
      }
    
  }

    if (sexo == 'f') {
      
      float ideal = (62.1 * altura) - 44.7;
      
      if (peso <= ideal) {
        printf("\nAbaixo do peso ideal.");
        printf("\nO peso ideal é %.1f.", ideal);
      }

      else if (peso > ideal) {
      printf("\nAcima do peso ideal.");
      printf("\nO peso ideal é %.1f.", ideal);
      }
    
  }

  return 0;
  
}
