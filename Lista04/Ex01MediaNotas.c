/*
Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a
letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se
for ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que
leia 3 notas de N alunos e acione o procedimento para cada aluno.
*/

#include <stdio.h>

void linha() {
  printf("--------------------------------");
}

void media (int i, char seletor, float n1, float n2, float n3) {

  float media;
  
  if (seletor == 'a') {
    media = (n1+n2+n3)/3.0;
    printf("\nMédia aritmética do ALUNO %d: %.1f\n\n", i, media);
  }

  if (seletor == 'p') {
    media = ((n1*5)+(n2*3)+(n3*2))/10.0;
    printf("\nMédia ponderada do ALUNO %d: %.1f\n\n", i, media);
  }
  
}

int main(void) {

  char seletor;
  int num, i = 1;
  float nota1, nota2, nota3;

  linha();
  printf("\nDigite o número de alunos: ");
  scanf("%d", &num);
  linha();

  for (i; i <= num; i++) {

    printf("\nDigite a MÉDIA desejada do ALUNO %d:\nA - Aritmética;\nP - Ponderada.\n", i);
    scanf(" %c", &seletor);
    linha();
    
    printf("\nDigite a NOTA 1 do ALUNO %d: ", i);
    scanf("%f", &nota1);

    printf("Digite a NOTA 2 do ALUNO %d: ", i);
    scanf("%f", &nota2);

    printf("Digite a NOTA 3 do ALUNO %d: ", i);
    scanf("%f", &nota3);

    linha();
    printf("\n");
    media(i, seletor, nota1, nota2, nota3);
    linha();

  }
  
  return 0;
  
}
