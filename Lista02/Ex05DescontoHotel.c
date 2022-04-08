/*
Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de
semana, concedendo um desconto de 25% na diária. Com isto, espera aumentar sua taxa
de ocupação de 50 para 80%. Sendo dado o valor normal da diária, calcular e imprimir:

- o valor da diária promocional;
- o valor total arrecadado com 80% de ocupação e diária promocional;
- o o valor total arrecadado com 50% de ocupação e diária normal;
- a diferença entre estes dois valores.
*/

#include <stdio.h>

int main(void) {
  
  printf("\nDigite o valor normal da diária: ");
  float diaria;
  scanf("%f", &diaria);

  float promocao = diaria * 0.75;
  float dois = (75 * 0.8) * promocao;
  float tres = (75 * 0.5) * diaria;
  
  printf("\nO valor da diária promocional será de %.2f reais.\n", promocao);
  printf("\nO valor total arrecadado com 80 por cento de ocupação e diária promocional será de %.2f reais.\n", dois);
  printf("\nO valor total arrecadado com 50 por cento de ocupação e diária normal será de %.2f reais.\n", tres);
  printf("\nA diferença entre estes dois valores será de %.2f reais.", dois - tres);
  
  return 0;
  
}
