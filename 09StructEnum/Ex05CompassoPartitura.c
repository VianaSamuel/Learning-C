/*
Uma música é dividida em uma sequência de compassos, e cada compasso possui
um conjunto de notas. A duração das notas de um compasso deve sempre somar 1.
Cada nota é representada por um caracter, de acordo com a tabela a seguir:
  W = 1
  H = 1/2
  Q = 1/4
  E = 1/8
  S = 1/16
  T = 1/32
  X = 1/64
Sabendo disso, escreva um programa que armazene em um vetor de estruturas as características das notas
musicais (a estrutura nota deve conter dois atributos: o caracter correspondente e a duração da nota).
Informe quantos compassos da entrada obedecem a regra.
  => Entrada: Cada entrada é composta por uma sequência de caracteres identificando as notas, de modo
  que o limite de cada compasso é separado por uma barra.
  => Saída: A saída deve ser um único inteiro correspondendo à quantidade de compassos que obedecem a regra. 
*/

#include <stdio.h>
#include <string.h>
#define MAX 51

typedef struct nota_{
  char id;
  float dur;
} nota;

void linha(){
  printf("\n------------------------------------------------\n");
}

float getDur(char c, nota notas[]){
  int i;
  for (i = 0; i < 7; i++){
    if (c == notas[i].id)
      return notas[i].dur;
  }
}

int main(void) {
  char sequencia[MAX];

  nota notas[7] = { 
    {'w', 1.0},
    {'h', 1/2.0},
    {'q', 1/4.0},
    {'e', 1/8.0},
    {'s', 1/16.0},
    {'t', 1/32.0},
    {'x', 1/64.0}
  };


  printf("\nDigite a(s) sequência(s) de compasso(s):");
  printf("\nExemplo de input: /hh/qqqq/w/hw/\n\n");
  scanf("%51s", sequencia);

  int tam = strlen(sequencia);
  int i;

  float soma = 0;
  int compassos = 0;
  for(i = 1; i < tam; i++){
    if (sequencia[i] == '/'){
      if (soma == 1){
        compassos++;
      }
      soma = 0;
    }
    else
    soma += getDur(sequencia[i], notas);
  }

  linha();
  printf("Número de compassos de soma equivalente a 1:\n%d", compassos);
  linha();
  
  return 0;
}