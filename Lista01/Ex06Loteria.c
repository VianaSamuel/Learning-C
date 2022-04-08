/* 
Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada um deu para a realização da aposta. Faça um
programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto
cada um ganharia do prêmio com base no valor investido.
*/

#include <stdio.h>

int main(void) {
  
    float aposta1, aposta2, aposta3;

    printf("\nDigite o valor da aposta 1: ");
    scanf("%f", &aposta1);

    printf("\nDigite o valor da aposta 2: ");
    scanf("%f", &aposta2);

    printf("\nDigite o valor da aposta 3: ");
    scanf("%f", &aposta3);

    float premio;
    printf("\nDigite o valor do prêmio: ");
    scanf("%f", &premio);

    float percento1, percento2, percento3;
    percento1 = aposta1 / (aposta1 + aposta2 + aposta3);
    percento2 = aposta2 / (aposta1 + aposta2 + aposta3);
    percento3 = aposta3 / (aposta1 + aposta2 + aposta3);

    printf("\nO apostador 1 receberia %.1f reais.", percento1 * premio);
    printf("\nO apostador 2 receberia %.1f reais.", percento2 * premio);
    printf("\nO apostador 3 receberia %.1f reais.", percento3 * premio);

    return 0;
  
}
