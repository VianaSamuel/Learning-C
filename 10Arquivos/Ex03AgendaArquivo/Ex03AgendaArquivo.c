/*
Incremente a implementação do exercício da agenda de compromissos
(lista anterior), salvando a agenda de compromissos do usuário em um
arquivo binário. Para isso, seu menu deve ter as seguintes opções:
  1. Registrar compromisso
  2. Listar todos os compromissos
  3. Listar compromissos de um mês
  4. Salvar agenda
  5. Carregar agenda salva
  6. Sair
O programa deve sempre retornar ao menu principal até que o usuário
escolha a opção Sair.
*/

#include <stdio.h>
#include <stdlib.h>
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

typedef struct compromissos_{
  struct datas c_data;
  struct horas c_hora;
  char compromisso[MAX];
} compromissos;

int main(void) {
  FILE *pAgenda;
  compromissos *c;
  int i, num_compromissos;

  while(1){
    linhabrk();
    printf("Escolha uma opção:");
    linhabrk();
    printf("1. Registrar compromisso");
    printf("\n2. Listar todos os compromissos");
    printf("\n3. Listar compromissos de um mês");
    printf("\n4. Salvar agenda");
    printf("\n5. Carregar agenda salva");
    printf("\n0. Sair");
    linhabrk();
    
    int opcao;
    scanf("%d", &opcao);
  
    if (opcao == 1){
      printf("\nDigite o número de compromissos a serem registrados:\n");
      scanf("%d", &num_compromissos);
      c = (compromissos *) realloc(c, (num_compromissos + 1) * sizeof(compromissos));
      for (i = 1; i <= num_compromissos; i++){
        printf("\n\nCompromisso %d:\n", i);
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
      for (i = 1; i <= num_compromissos; i++){
        printf("\n\nCompromisso %d:\n", i);
        linha();
        printf("Data: %d/%d/%d", c[i].c_data.dia, c[i].c_data.mes, c[i].c_data.ano);
        printf("\nHorário: %d:%d:%d", c[i].c_hora.horas, c[i].c_hora.minutos, c[i].c_hora.segundos);
        printf("\nCompromisso: %s\n\n", c[i].compromisso);
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
      
    if (opcao == 4){
      pAgenda = fopen("agenda.bin", "wb");
      fwrite(&num_compromissos, sizeof(int), 1, pAgenda);
      fwrite(c, sizeof(compromissos), num_compromissos, pAgenda);
     // fwrite(&c[i], sizeof(compromissos), 1, pAgenda);
      fclose(pAgenda);
      printf("\n\nAgenda SALVA com sucesso!\n\n");
    }
      
    if (opcao == 5){
      pAgenda = fopen("agenda.bin", "rb");
      //while(!feof(pAgenda)){
        //for (i = 0; i < LIM; i++){
        //fread(&c[i], sizeof(compromissos), 1, pAgenda);
      //}
      fread(&num_compromissos, sizeof(int), 1, pAgenda);
      c = (compromissos *) malloc((num_compromissos + 1) *sizeof(compromissos));
      fread(c, sizeof(compromissos), (num_compromissos + 1), pAgenda);
      printf("\n\nAgenda CARREGADA com sucesso!\n\n");
    }
      
    if (opcao == 0){
      break;
    }
  }
  
  return 0;
}