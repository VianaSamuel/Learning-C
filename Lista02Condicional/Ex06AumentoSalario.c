/*
Construa um programa que leia uma opção conforme abaixo (usar estrutura SWITCH)
e o salário atual do funcionário, calcula e exiba o novo salário:

A = aumento de 8% no salário;
B = aumento de 11% no salário;
C = aumento fixo no salário
(de R$ 350,00 se o salário atual for até R$1000 e de R$200,00 se o
salário atual for maior que R$ 1000).
*/

#include <stdio.h>

int main(void) {
  
  printf("\nDigite o salário atual do funcionário: ");
  float salario;
  scanf("%f", &salario);

  printf("\nEscolha uma opção:\n");
  printf("\n\tA = aumento de 8 por cento no salário;");
  printf("\n\tB = aumento de 11 por cento no salário;");
  printf("\n\tC = aumento fixo no salário.\n");
  printf("\nSua opção: ");
  char selecao;
  scanf(" %c", &selecao);

  switch (selecao) {
    
    case 'a':
    printf("\nO aumento de 8 por cento no salário resulta em %.2f reais.", salario * 1.08);
    break;

    case 'b':
    printf("\nO aumento de 11 por cento no salário resulta em %.2f reais.", salario * 1.11);
    break;

    case 'c':
    if (salario <= 1000) {
      printf("\nUm aumento fixo no salário resulta em %.2f reais.", salario + 350);
      }
    else {
      printf("\nUm aumento fixo no salário resulta em %.2f reais.", salario + 200);
      break;
    }
    
  }
  
  return 0;
  
}
