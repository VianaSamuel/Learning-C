/*
Faça um procedimento que recebe 3 valores inteiros por parâmetro e
os exiba em ordem crescente. Faça um programa que leia N conjuntos de
3 valores e acione o procedimento para cada conjunto.
*/

#include <stdio.h>

void ordemCrescente(int n1, int n2, int n3) {
  
  if (n1<n2 && n1<n3 && n2<n3)
    printf("\nOrdem crescente da sequência: %d, %d, %d", n1, n2, n3);

  else if (n1<n2 && n1<n3 && n3<n2)
    printf("\nOrdem crescente da sequência: %d, %d, %d", n1, n3, n2);

  else if (n2<n1 && n2<n3 && n1<n3)
    printf("\nOrdem crescente da sequência: %d, %d, %d", n2, n1, n3);

  else if (n2<n1 && n2<n3 && n3<n1)
    printf("\nOrdem crescente da sequência: %d, %d, %d", n2, n3, n1);

  else if (n3<n1 && n3<n2 && n2<n1)
    printf("\nOrdem crescente da sequência: %d, %d, %d", n3, n2, n1);

  else if (n3<n1 && n3<n2 && n1<n2)
    printf("\nOrdem crescente da sequência: %d, %d, %d", n3, n1, n2);
  
}

int main(void) {
  
  int i, n, num1, num2, num3;

  printf("\nDigite quantas vezes você deseja inserir 3 números: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    
    printf("\n\nDigite o número 1: ");
    scanf("%d", &num1);

    printf("Digite o número 2: ");
    scanf("%d", &num2);

    printf("Digite o número 3: ");
    scanf("%d", &num3);
    
    ordemCrescente(num1, num2, num3);
    
  }
}
