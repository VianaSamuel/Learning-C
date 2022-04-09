/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre
o salário e número de filhos de cada habitante. A prefeitura deseja saber:
  a) média do salário da população;
  b) média do número de filhos;
  c) maior salário;
  d) percentual de pessoas com salário de até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.
*/

#include <stdio.h>

int main(void) {
  
  int filhos, somaSalarios = 0, somaFilhos = 0, m100 = 0;
  float i = 0, maiorSalario = 0, salario = 0;
  
	printf("\nDigite um salário negativo para encerrar a pesquisa.\n");

  while (salario >= 0) {
    printf("\nDigite seu salário: ");
    scanf("%f", &salario);
    somaSalarios = salario + somaSalarios;
    if (salario < 0)
      break;
    if (salario >= maiorSalario)
      maiorSalario = salario;
    if (salario <= 100 && salario >= 0)
      m100++;
    printf("Digite quantos filhos você tem: ");
    scanf("%d", &filhos);
    somaFilhos = filhos + somaFilhos;
    i++;
  }

  int mediaFilhos = somaFilhos / i;
  float mediaSalarios = somaSalarios / i;
  float percentoM100 = (m100 / i) * 100;

  printf("\nMédia do salário da população: %.1f", mediaSalarios);
  printf("\nMédia de filhos da população: %.1d", mediaFilhos);
  printf("\nMaior salário da população: %.1f", maiorSalario);
  printf("\nPercentual de pessoas com salário de até R$100,00: %.1f%%", percentoM100);
  
  return 0;
  
}
