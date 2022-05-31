/*
Faça um programa que controla o consumo de energia dos eletrodomésticos de uma
casa. Para isso crie a estrutura eletrodoméstico com os seguintes atributos:
  Nome: char[30]
  Potência em kW: float
  Tempo ativo por dia (em horas): float
Leia do usuário os N eletrodomésticos da sua casa e calcule o consumo total da casa por mês
e o consumo relativo de cada eletrodoméstico por mês (consumo/consumo_total). Apresente
o último dado em porcentagem.
*/

#include <stdio.h>
#define MAX 31

void linha(){
  printf("\n-----------------------------------\n");
}

struct eletro{
  char nome[MAX];
  float potencia;
  float tempo;
};

int main(void) {
  int n;
  printf("\nDigite o número de eletrodomésticos:\n");
  scanf("%d", &n);
  struct eletro eletro[n];
  float consumo_total = 0;
  float porcentagem = 0;

  linha();
  
  int i;
  for (i = 0; i < n; i++){
    printf("\nDigite o nome do eletrodoméstico:\n");
    scanf("%31s", eletro[i].nome);
    printf("\nDigite a potência do eletrodoméstico em kW:\n");
    scanf("%f", &eletro[i].potencia);
    printf("\nDigite o tempo (em horas) de atividade diária do eletrodoméstico:\n");
    scanf("%f", &eletro[i].tempo);
    consumo_total += (eletro[i].potencia * eletro[i].tempo * 30);
    linha();
  }

  printf("\nConsumo mensal total da casa:\n%.1f kWh/mês\n", consumo_total);

  for (i = 0; i < n; i++){
    porcentagem = (eletro[i].potencia * eletro[i].tempo * 30) / consumo_total;
    printf("\nConsumo relativo do eletrodoméstico '%s':\n%.1f kWh/mês\n", eletro[i].nome, porcentagem);
  }
  
  return 0;
}