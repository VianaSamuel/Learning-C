/*
Vamos criar uma agenda de compromissos! Para isso serão necessárias os seguintes tipos
de dados:
  - Data: composto por dia, mês, ano
  - Hora: composto por horas, minutos, segundos
  - Compromisso: composto por data, hora e descrição.
Faça um menu para o usuário com as seguintes opções:
  1. Registrar compromisso
  2. Listar todos os compromissos
  3. Listar compromissos de um mês
A funcionalidade listar por mês, deve solicitar ao usuário o mês (de 01 a 12) e listar
os compromissos daquele mês (do ano corrente).
*/

#include <stdio.h>
#define MAX 101
#define LIM 999

void linha(){
  printf("---------------------------------\n");
}

void linhabrk(){
  printf("\n---------------------------------\n");
}

struct datas{
  int dia;
  int mes;
  int ano;
};

struct horas{
  int horas;
  int minutos;
  int segundos;
};

struct compromissos{
  struct datas c_data;
  struct horas c_hora;
  char compromisso[MAX];
};

int main(void) {
  struct compromissos c[LIM];
  int i, num_compromissos;
  while (1){
    linhabrk();
    printf("Escolha uma opção:");
    linhabrk();
    printf("1. Registrar compromisso");
    printf("\n2. Listar todos os compromissos");
    printf("\n3. Listar compromissos de um mês");
    linhabrk();
    int opcao;
    scanf("%d", &opcao);

    if (opcao == 1){
      printf("\nDigite o número de compromissos a serem registrados:\n");
      scanf("%d", &num_compromissos);
      for (i = 0; i < num_compromissos; i++){
        printf("\n\nCompromisso %d:\n", i+1);
        linha();
        printf("Data (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &c[i].c_data.dia, &c[i].c_data.mes, &c[i].c_data.ano);
        printf("Horário (hh:mm:ss): ");
        scanf("%d:%d:%d", &c[i].c_hora.horas, &c[i].c_hora.minutos, &c[i].c_hora.segundos);
        printf("Compromisso (1 palavra): ");
        scanf("%101s", c[i].compromisso);
      }
    }

    if (opcao == 2){
      for (i = 0; i < num_compromissos; i++){
        printf("\n\nCompromisso %d:\n", i+1);
        linha();
        printf("Data: %d/%d/%d", c[i].c_data.dia, c[i].c_data.mes, c[i].c_data.ano);
        printf("\nHorário: %d:%d:%d", c[i].c_hora.horas, c[i].c_hora.minutos, c[i].c_hora.segundos);
        printf("\nCompromisso: %s\n", c[i].compromisso);
        }
    }

    if (opcao == 3){
      int mes, correspondencia = 0;
      printf("\nDigite o mês desejado:\n");
      scanf("%d", &mes);
      for (i = 0; i < 12; i++){
        if (c[i].c_data.mes == mes){
          correspondencia = 1;
          printf("\n\nCompromisso encontrado!\n");
          linha();
          printf("Data: %d/%d/%d", c[i].c_data.dia, c[i].c_data.mes, c[i].c_data.ano);
          printf("\nHorário: %d:%d:%d", c[i].c_hora.horas, c[i].c_hora.minutos, c[i].c_hora.segundos);
          printf("\nCompromisso: %s\n", c[i].compromisso);
        }
      }
      if (correspondencia == 0)
        printf("\nNenhum compromisso no mês %d foi registrado.", mes);
    }
  }
  
  return 0;
}