/*
Em uma eleição existem 4 candidatos. Os votos são informados através
de códigos. Os dados utilizados para a contagem dos votos obedecem a
seguinte codificação:
  1, 2, 3, 4 = voto para os respectivos candidatos;
  5 = voto nulo;
  6 = voto em branco.
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
  - total de votos para cada candidato;
  - total de votos nulos;
  - total de votos em branco.
Como finalizador do conjunto de votos, tem-se o valor 0.
*/

#include <stdio.h>

int main(void) {

  int voto;
  int i = 1;
  int v1 = 0, v2 = 0, v3 = 0, v4 = 0;
  int nulo = 0, branco = 0;

  printf("\nCodificação de votos:");
  printf("\n1, 2, 3, 4 = voto para os respectivos candidatos;");
  printf("\n5 = voto nulo;");
  printf("\n6 = voto em branco;");
  printf("\n0 = sair.\n");
  
  while (i > 0) {
    printf("\nDigite seu voto: ");
    scanf("%d", &voto);
    switch (voto) {
      
      case 1:
      v1++;
      printf("Voto contabilizado.\n");
      break;

      case 2:
      v2++;
      printf("Voto contabilizado.\n");
      break;

      case 3:
      v3++;
      printf("Voto contabilizado.\n");
      break;

      case 4:
      v4++;
      printf("Voto contabilizado.\n");
      break;

      case 5:
      nulo++;
      printf("Voto contabilizado.\n");
      break;

      case 6:
      branco++;
      printf("Voto contabilizado.\n");
      break;

      case 0:
      i--;
      break;

      default:
      printf("Voto inválido.\n");
      break;
              
    }
  }

  printf("\nTotal de votos para 1: %d", v1);
  printf("\nTotal de votos para 2: %d", v2);
  printf("\nTotal de votos para 3: %d", v3);
  printf("\nTotal de votos para 4: %d", v4);
  printf("\n\nTotal de votos nulos: %d", nulo);
  printf("\nTotal de votos brancos: %d", branco);
  
  return 0;
  
}
