/*
Escreva um cÓdigo que recebe como entrada o caminho para um arquivo
e crie as seguintes funções:
  - conta_linhas: Retorna a quantidade de linhas do arquivo.
  - maior_linha: Retorna o número da linha com maior quantidade de caracteres (começando de 1).
  - menor_linha: Retorna o número da linha com menor quantidade de caracteres (começando de 1).
  - conta_vogais: Retorna um vetor com o número de ocorrências de cada vogal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINHA 99

int conta_linhas(FILE *pT, char l[]){
  int i = 0;
  while (!feof(pT)){
    if (fgets(l, MAX_LINHA, pT) != NULL)
      i++;
  }
  return i + 1;
}

int maior_linha(FILE *pT, int num_linhas){
  char *p, linha[MAX_LINHA];
  int maior = 0, maior_linha;
  int i, tam;
  for (i = 0; i < num_linhas; i++){
    p = fgets(linha, MAX_LINHA, pT);
    tam = strlen(linha);
    if (tam >= maior){
      maior = tam;
      maior_linha = i;
    }
  }
  return maior_linha + 1;
}

int menor_linha(FILE *pT, int num_linhas){
  char *p, linha[MAX_LINHA];
  int menor = MAX_LINHA, menor_linha;
  int i, tam;
  for (i = 0; i < num_linhas; i++){
    p = fgets(linha, MAX_LINHA, pT);
    tam = strlen(linha);
    if (tam <= menor){
      menor = tam;
      menor_linha = i;
    }
  }
  return menor_linha + 1;
}

void conta_vogais(FILE *pT, int num_linhas, int *v){
  char *p, linha[MAX_LINHA];
  int i, j;

  for (i = 0; i < num_linhas; i++){
    p = fgets(linha, MAX_LINHA, pT);
    for (j = 0; j < strlen(linha); j++){
      if (linha[j] == 'a' || linha[j] == 'A')
        v[0]++;
      if (linha[j] == 'e' || linha[j] == 'E')
        v[1]++;
      if (linha[j] == 'i' || linha[j] == 'I')
        v[2]++;
      if (linha[j] == 'o' || linha[j] == 'O')
        v[3]++;
      if (linha[j] == 'u' || linha[j] == 'U')
        v[4]++;
    }
  }
}

void divisor(){
  printf("\n-----------------------\n");
}

int main(void) {
  FILE *pTexto = fopen("texto.txt", "r");
  char linha[MAX_LINHA];
  
  if (fgets(linha, MAX_LINHA, pTexto) == NULL) printf("\nErro! Arquivo vazio ou inexistente.");
  else{
    int qntdLinhas = conta_linhas(pTexto, linha);
    printf("\nQuantidade de linhas: %d\n\n", qntdLinhas);

    rewind(pTexto);
    int maior = maior_linha(pTexto, qntdLinhas);
    printf("Maior linha: %d\n", maior);

    rewind(pTexto);
    int menor = menor_linha(pTexto, qntdLinhas);
    printf("Menor linha: %d\n", menor);

    rewind(pTexto);
    int vogais[5];
    for (int i = 0; i < 5; i++){
      vogais[i] = 0;
    }
    conta_vogais(pTexto, qntdLinhas, vogais);
    divisor();
    printf("Quantidade de vogais:");
    divisor();
    printf("A = %d\n", vogais[0]);
    printf("E = %d\n", vogais[1]);
    printf("I = %d\n", vogais[2]);
    printf("O = %d\n", vogais[3]);
    printf("U = %d\n", vogais[4]);
  }
  
  return 0;
}