/*
Faça um procedimento que recebe a média final de um aluno, identifica e
exibe o seu conceito, conforme a tabela abaixo. Faça um programa que leia
a média de N alunos, acionando o procedimento para cada um deles.
  F - Até 39
  E - 40 a 59
  D - 60 a 69
  C - 70 a 79
  B - 80 a 89
  A - A partir de 90
*/

#include <stdio.h>

void conceito() {
  
  float media;

  printf("\nDigite a média do aluno: ");
  scanf("%f", &media);

  if (media <= 39)
    printf("Conceito do aluno: F\n");
  else if (media >= 40 && media <= 59)
    printf("Conceito do aluno: E\n");
  else if (media >= 60 && media <= 69)
    printf("Conceito do aluno: D\n");
  else if (media >= 70 && media <= 79)
    printf("Conceito do aluno: C\n");
  else if (media >= 80 && media <= 89)
    printf("Conceito do aluno: B\n");
  else if (media >= 90)
    printf("Conceito do aluno: A\n");
}

int main(void) {

  int n, i = 0;
  
  printf("\nDigite o número de alunos a terem suas médias calculadas: ");
  scanf("%d", &n);

  for (i; i < n; i++) {
    conceito();
  }
  
}
