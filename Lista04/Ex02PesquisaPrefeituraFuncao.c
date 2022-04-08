/*
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados
sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um
número não determinado de pessoas, calcule e exiba a média de salário da população (a
condição de parada pode ser um flag ou a quantidade N). Faça um programa que acione o
procedimento.
*/

#include <stdio.h>

int media() {

  int n, fil, i = 1;
  float sal, somaSalarios = 0, somaFilhos = 0;

  printf("\nDigite quantas pessoas participarão da pesquisa: ");
  scanf("%d", &n);

  for (i; i <= n; i++) {
    
    printf("\nDigite o seu salário: ");
    scanf("%f", &sal);
    somaSalarios += sal;

    printf("Digite quantos filhos você tem: ");
    scanf("%d", &fil);
    somaFilhos += fil;
    
  }

  float mediaSalarios = somaSalarios/n;
  float mediaFilhos = somaFilhos/n;
  
  printf("\nMédia do salário da população: %.1f", mediaSalarios);
  printf("\nMédia de filhos da população: %.1f", mediaFilhos);
  
}

int main(void) {
  media();
}
