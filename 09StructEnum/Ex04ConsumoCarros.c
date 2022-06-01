/*
Escreva um programa que possua a estrutura carro, com dois atributos:
uma string modelo (Fusca, Gol, etc.) e consumo, sendo o consumo referente
a quantos km esse carro faz por litro. Leia do usuário os modelos e os seus
respectivos consumos e imprima qual dos carros é o mais econômico. Seu programa
deve alocar dinamicamente o espaço necessário para a estrutura.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 21

void linha(){
  printf("\n-----------------------------\n");
}

typedef struct str{
  char modelo[MAX];
  int consumo;
} estrutura;

int main(void) {
  int n;
  printf("\nDigite a quantidade de carros que você deseja comparar: ");
  scanf("%d", &n);

  estrutura *aloca = (estrutura *) malloc(n * sizeof(estrutura));

  printf("\n");
  int i;
  int lit_economico = 0;
  char mod_economico[MAX];
  for (i = 0; i < n; i++){
    printf("\nCarro %d", i+1);
    linha();
    printf("Digite o modelo: ");
    scanf("%21s", aloca[i].modelo);
    printf("Digite o consumo (km/L): ");
    scanf("%d", &aloca[i].consumo);
    if (aloca[i].consumo >= lit_economico){
      lit_economico = aloca[i].consumo;
      strcpy(mod_economico, aloca[i].modelo);
    }
  }

  printf("\n");
  linha();
  printf("Carro mais econômico");
  linha();
  printf("Modelo: %s", mod_economico);
  printf("\nConsumo: %d km/L", lit_economico);
  
  return 0;
}