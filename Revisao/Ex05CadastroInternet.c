/*
Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do
cliente, e-mail, número de horas de acesso, página (S-sim ou N-não). Elabore um
algoritmo que calcule e mostre um relatório contendo o valor a pagar por cada cliente,
sabendo-se que as primeiras 20 horas de acesso é R$35,00 e as horas que excederam tem o
custo de R$2,50 por hora. Para os clientes que têm página, adicionar R$40,00. Inserir um
conjunto de registros (máximo 500).
*/

#include <stdio.h>

typedef struct cadastro_{
  int codigo;
  char email[50];
  int horas;
  char pagina;
  float conta;
} cadastro;

void linha(){
  printf("----------------------------------\n");
}

int main(void) {
  int i, j, k;
  cadastro c[500];

  int num;
  printf("\nDigite o número de clientes: ");
  scanf("%d", &num);

  for (i = 0; i < num; i++){
    printf("\n\n");
    printf("Cliente %d\n", i + 1);
    linha();
    printf("Código: ");
    scanf("%d", &c[i].codigo);
    printf("Email: ");
    scanf("%50s", c[i].email);
    printf("Horas de acesso: ");
    scanf("%d", &c[i].horas);
    printf("O cliente possui página? (S/N): ");
    scanf(" %c", &c[i].pagina);
  }

  float extras;
  for (i = 0; i < num; i++){
    c[i].conta = 0;
    k = 0;
    if (c[i].horas <= 20){
      c[i].conta += 35;
    } else {
      for (j = 20; j < c[i].horas; j++){
        k++;
      }
      extras = (2.5 * k);
      c[i].conta += 35 + extras;
    }
    if (c[i].pagina == 's' || c[i].pagina == 'S'){
      c[i].conta += 40;
    }
  }

  printf("\n\n\n==================================");
  printf("\nRELATÓRIO:\n");
  printf("==================================\n\n");
  for (i = 0; i < num; i++){
    printf("CLIENTE %d\n", i + 1);
    linha();
    printf("Código: ");
    printf("%d\n", c[i].codigo);
    printf("Email: ");
    printf("%s\n", c[i].email);
    printf("Horas de acesso: ");
    printf("%d\n", c[i].horas);
    printf("O cliente possui página? (S/N): ");
    printf("%c\n", c[i].pagina);
    linha();
    printf("TOTAL A PAGAR: %.1f\n\n\n", c[i].conta);
  }
  
  return 0;
}