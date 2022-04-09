/*
Escreva um procedimento que recebe 3 valores reais (X, Y e Z) e que verifique se esses
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual
é o tipo de triângulo formado.
Para que X, Y e Z formem um triângulo, é necessário que a seguinte propriedade seja
satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do 
comprimento dos outros dois lados. O procedimento deve identificar o
tipo de triângulo formado observando as seguintes definições:
  - Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
  - Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.
  - Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados)
e, para cada triângulo, acione o procedimento.
*/



#include <stdio.h>

void procedimento(int l1, int l2, int l3) {

  if (l1 == l2 && l2 == l3)
    printf("\nO triângulo em questão é equilátero.\n");
  else if (l1 == l2 || l2 == l3 || l1 == l3)
    printf("\nO triângulo em questão é isósceles.\n");
  else if (l1 != l2 && l2 != l3)
    printf("\nO triângulo em questão é escaleno.\n");
  
}

int main(void) {

  int lado1, lado2, lado3;

  while (1) {

    printf("\nDigite o lado 1 do triângulo: ");
    scanf("%d", &lado1);

    printf("Digite o lado 2 do triângulo: ");
    scanf("%d", &lado2);

    printf("Digite o lado 3 do triângulo: ");
    scanf("%d", &lado3);

    if (lado1<(lado2+lado3) && lado2<(lado1+lado3) && lado3<(lado1+lado2))
      procedimento(lado1, lado2, lado3);
    else
      printf("\nOs lados inseridos não formam um triângulo.\n");
    
  }
}
