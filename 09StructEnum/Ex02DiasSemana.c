/*
Seu programa irá precisar de um tipo de dado enum com os dias da semana. Crie
também uma matriz de char onde cada linha é o nome de um dia da semana. Ambas as
estruturas devem ser correspondentes, ou seja, o valor de uma constante do enum deve
se referir à linha da matriz que contém o nome daquele dia da semana.
O usuário vai fornecer o nome de um dia da semana, seu programa deve:
  - converter o nome para um inteiro (a linha da matriz);
  - realizar um switch-case para imprimir se aquele é um dia da semana ou um fim de semana.
*/

#include <stdio.h>
#include <string.h>
#define MAX 8

enum semana {segunda, terça, quarta, quinta, sexta, sabado, domingo};

void linha(){
  printf("\n-----------------------------------------------------------\n");
}

int main(void) {
  char nome[MAX], matriz[7][MAX];
  int i;
  
  strcpy(matriz[0], "segunda");
  strcpy(matriz[1], "terça");
  strcpy(matriz[2], "quarta");
  strcpy(matriz[3], "quinta");
  strcpy(matriz[4], "sexta");
  strcpy(matriz[5], "sabado");
  strcpy(matriz[6], "domingo");
  
  printf("\nDigite o nome de um dia da semana (sem 'feira'):\n");
  scanf("%8s", nome);

  int compara, dia, erro = 1;
  linha();
  for (i = 0; i < 7; i++) {
    compara = strcmp(nome, matriz[i]);
    if (compara == 0) {
      erro = 0;
      dia = i;
      printf("- Número correspondente ao dia da semana inserido: %d", dia + 2);
    }
  }
  if (erro == 1){
    printf("- O nome digitado não corresponde a um dia!");
    dia = 99;
  }

  switch(dia)
  {
    case segunda:
    printf("\n- O dia inserido é um dia de semana.");
    break;
    
    case terça:
    printf("\n- O dia inserido é um dia de semana.");
    break;
    
    case quarta:
    printf("\n- O dia inserido é um dia de semana.");
    break;
    
    case quinta:
    printf("\n- O dia inserido é um dia de semana.");
    break;
    
    case sexta:
    printf("\n- O dia inserido é um dia de semana.");
    break;

    case sabado:
    printf("\n- O dia inserido é um final de semana.");
    break;

    case domingo:
    printf("\n- O dia inserido é um final de semana.");
    break;

    default:
    printf("\n- O dia inserido não é válido.");
    break;
  }
  linha();
  
  return 0;
}