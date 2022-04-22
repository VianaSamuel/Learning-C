/*
Faça um procedimento recursivo que receba dois valores inteiros a e b e imprima
o intervalo fechado entre eles. Se a > b imprima uma mensagem de erro.
*/

#include <stdio.h>

void procedimento(int a, int b) {
  
  if (a != b) {

    printf("%d ", a);
    procedimento(a + 1, b);
    
  }

  else return printf("%d", a);
  
}

int main(void) {

  int aa, bb;
  
  printf("\nDigite o valor de A: ");
  scanf("%d", &aa);

  printf("Digite o valor de B: ");
  scanf("%d", &bb);

  if (aa > bb) printf("\nValores inválidos!");
  else {

    printf("\nIntervalo fechado de %d a %d:\n", aa, bb);
    procedimento(aa, bb);
    
  }
  
  return 0;
  
}