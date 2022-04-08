/*
Faça um algoritmo que segundo uma nota informada pelo usuário,
verifique em qual faixa a mesma se encaixa e imprima para o usuário
a mensagem correspondente conforme a tabela abaixo:

ÓTIMO: Nota >=8 e Nota <=10
BOM: Nota >=7 e Nota <8
REGULAR: Nota >=5 e Nota <7
INSATISFATÓRIO: Nota <5
*/

#include <stdio.h>

int main(void) {
  
  printf("\nDigite a nota do aluno: ");
  int nota;  scanf("%i", &nota);

  if (nota >=8 && nota <=10)
    printf("\nÓTIMO");  

  else if (nota >=7 && nota <8)
    printf("\nBOM");

  else if (nota >=5 && nota <7)
    printf("\nREGULAR");

  else if (nota <5)
    printf("\nINSATISFATÓRIO");
 
   else
   printf("\nNOTA INVÁLIDA");

  return 0;
  
}
