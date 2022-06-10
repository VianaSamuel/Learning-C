/*
Escreva um programa que leia dois arquivos:
  - "alunos.txt" contendo o nome e matrícula dos alunos
  - "notas.txt" contendo a matrícula dos alunos e 4 notas de cada aluno
Seu programa deve escrever um novo arquivo "medias.txt" com os nomes dos alunos
e as médias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro_ {
  char nome[50];
  char sobrenome[50];
  int matricula;
  int nota[4];
} cadastro;

int main(void) {
  cadastro c[5];
  int i, j;

  FILE *pAlunos = fopen("alunos.txt", "r");
  if (pAlunos == NULL)
    printf("\nErro! Arquivo vazio ou inexistente.");
  else {
    while (!feof(pAlunos)) {
      for (i = 0; i < 5; i++) {
        fscanf(pAlunos, "%s %s %d", c[i].nome, c[i].sobrenome, &c[i].matricula);
      }
    }
  }
  fclose(pAlunos);

  int mNota[5], nota[5][4];
  FILE *pNotas = fopen("notas.txt", "r");
  if (pNotas == NULL)
    printf("\nErro! Arquivo vazio ou inexistente.");
  else {
    while (!feof(pNotas)) {
      for (i = 0; i < 5; i++) {
        fscanf(pNotas, "%d", &mNota[i]);
        for (j = 0; j < 5; j++) {
          if (mNota[i] == c[j].matricula) {
            fscanf(pNotas, "%d %d %d %d", &c[j].nota[0], &c[j].nota[1], &c[j].nota[2], &c[j].nota[3]);
          }
        }
      }
    }
  }
  fclose(pNotas);

  float media[5];
  for (i = 0; i < 5; i++) {
    media[i] = (c[i].nota[0] + c[i].nota[1] + c[i].nota[2] + c[i].nota[3]) / 4;
  }

  FILE *pMedias = fopen("medias.txt", "w");
  if (pMedias == NULL)
    printf("\nErro! Arquivo vazio ou inexistente.");
  else {
    for (i = 0; i < 5; i++) {
      fprintf(pMedias, "%s %s %.1f\n", c[i].nome, c[i].sobrenome, media[i]);
    }
  }
  fclose(pMedias);

  fprintf(stdout, "%s", "\nArquivo 'medias.txt' gerado com sucesso!");

  return 0;
}