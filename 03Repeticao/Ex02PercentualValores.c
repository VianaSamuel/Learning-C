/*
Adaptar o programa anterior para que ele calcule o percentual dos valores
positivos, negativos e zeros em relação ao total de valores fornecidos.
*/

#include <stdio.h>

int main(void) {
  
  int i, n;
  int positivos = 0, negativos = 0, zeros = 0;
  printf("\nDigite quantos números você deseja inserir: ");
  scanf("%d", &i);
  float total = i;
  printf("\nDigite os números a seguir: \n");

  while (i>0) {
    i--;
    scanf("%d", &n);
      if (n>0)
        positivos++;
      if (n<0)
        negativos++;
      if (n==0)
        zeros++;
  }

  printf("\nQuantidade de números positivos: %d.", positivos);
  printf("\nQuantidade de números negativos: %d.", negativos);
  printf("\nQuantidade de zeros: %d.\n", zeros);
  
  float ppositivos = (positivos / total) * 100;
  float pnegativos = (negativos / total) * 100;
  float pzeros = (zeros / total) * 100;

  printf("\nO percentual de números positivos é de %.1f%%.", ppositivos);
  printf("\nO percentual de números negativos é de %.1f%%.", pnegativos);
  printf("\nO percentual de zeros é de %.1f%%.", pzeros);
  
  return 0;
  
}
