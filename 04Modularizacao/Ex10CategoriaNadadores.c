/*
Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria
desse nadador de acordo com a tabela abaixo.
  F - 5 a 7
  E - 8 a 10
  D - 11 a 13
  C - 14 a 15
  B - 16 a 17
  A - Acima de 18
Faça um programa que lê a idade de um nadador e imprime sua categoria.
*/


#include <stdio.h>

void categoria(int idd) {

  if (idd < 5)
    printf("Idade inválida.");
  else if (idd >= 5 && idd <= 7)
    printf("Categoria do nadador: F");
  else if (idd >= 8 && idd <= 10)
    printf("Categoria do nadador: E");
  else if (idd >= 11 && idd <= 13)
    printf("Categoria do nadador: D");
  else if (idd >= 14 && idd <= 15)
    printf("Categoria do nadador: C");
  else if (idd >= 16 && idd <= 17)
    printf("Categoria do nadador: B");
  else if (idd >= 18)
    printf("Categoria do nadador: A");

}

int main(void) {

  int idade;
  
  printf("\nDigite a idade do nadador: ");
  scanf("%d", &idade);
  
  categoria(idade);
  
}
