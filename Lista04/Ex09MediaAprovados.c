/*
Faça uma função que lê um número de notas de alunos, calcula e retorna a média das
notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê
o número de alunos e imprime a média retornada pela função.
*/

#include <stdio.h>

float media(void){

  int qntdAlunos, aprovados = 0;
  float nota, mediaNotas, somaNotas = 0;

  printf("\nDigite o número de alunos: ");
  scanf("%d", &qntdAlunos);

  for (int i = 1; i <= qntdAlunos; i++){
    
    printf("\nDigite a nota do aluno %d: ", i);
    scanf("%f", &nota);

    if (nota >= 6) {
      aprovados++;
      somaNotas += nota;
    }
    else
      printf("Nota desconsiderada pois o aluno foi reprovado.\n");
  }

  if (aprovados > 0) {
    mediaNotas = somaNotas/aprovados;
  }
  else {
    printf("\nMédia desconsiderada pois todos os alunos em questão foram reprovados.");
    mediaNotas = 0;
  }

  return mediaNotas;
  
}

int main() {
  
  float resultado = media();
  printf("\nMédia de notas dos alunos aprovados: %.1f", resultado);
  
}
