/*
Crie um programa que receba dados de vários alunos (Matricula e Telefone)
e armazene em um arquivo texto. Crie no mesmo programa uma opção de ler dados
de um arquivo que já tenha armazenado os dados de alunos.
*/

#include <stdio.h>
#include <stdlib.h>

void linha(){
  printf("\n=========================\n");
}

void linha2(){
  printf("\n-------------------------\n");
}

typedef struct matricula_{
  int matricula;
  int telefone;
} matricula;

int main(void) {
  int i, opcao, num;
  matricula *m;
  FILE *pMat;

  while(1){
    printf("\nSelecione uma opção:");
    linha();
    printf("1. Registrar cadastros");
    printf("\n2. Ler cadastros");
    printf("\n\nOpção: ");
    scanf("%d", &opcao);

    if (opcao == 1){
      pMat = fopen("matriculas.txt", "w");
      if (pMat != NULL){
        printf("\nDigite o número de cadastros a serem registrados: ");
        scanf("%d", &num);
        m = malloc(num * sizeof(matricula));
        printf("\n");
        for (i = 0; i < num; i++){
          printf("\nCADASTRO %d:", i + 1);
          linha2();
          printf("Matrícula: ");
          scanf("%d", &m[i].matricula);
          printf("Telefone: ");
          scanf("%d", &m[i].telefone);
          fprintf(pMat, "\n%d %d", m[i].matricula, m[i].telefone);
          printf("\n");
        }
        fclose(pMat);
      }
    }

    else if (opcao == 2){
      pMat = fopen("matriculas.txt", "r");
      int k = -1;
      if (pMat != NULL){
        while (!feof(pMat)){
          k++;
          fscanf(pMat, "%d %d", &m[k].matricula, &m[k].telefone);
          linha2();
          printf("CADASTRO %d:", k + 1);
          linha2();
          printf("Matrícula: %d\n", m[k].matricula);
          printf("Telefone: %d\n\n", m[k].telefone);
        }
      }
    }
  }
  
  return 0;
}