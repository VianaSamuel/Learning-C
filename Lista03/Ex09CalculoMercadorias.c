/*
Um comerciante deseja fazer o levantamento do lucro de suas mercadorias.
Para isso, mandou digitar uma linha para cada mercadoria com o preço de
compra e de venda de cada uma. A última linha contém preço de compra igual a 0.

Escreva um programa que:
  a) Determine e escreva quantas mercadorias proporcionaram:
    i) Lucro < 10%
    ii) 10% <= lucro <= 20%
    iii) Lucro > 20%

  b) Determine e escreva o valor total de compra e de venda de todas as mercadorias,
assim como o lucro total.
*/


#include <stdio.h>

int main(void) {

  int i = 1;
  float l, c, v;
  float ltotal = 0, ctotal = 0, vtotal = 0;
  int lmenor10 = 0, lentre1020 = 0, lmaior20 = 0;

  printf("\nPara sair, digite um preço de compra equivalente a 0.\n");

  while (i > 0) {
    
    printf("\nDigite o preço de compra: ");
    scanf("%f", &c);
      if (c == 0)
        break;
    printf("Digite o preço de venda: ");
    scanf("%f", &v);

    l = v - c;
    ltotal += l;
    vtotal += v;
    ctotal += c;

    if ((l/c) * 100 < 10)
      lmenor10++;
    if ((l/c) * 100 >= 10 && (l/c) * 100 <= 20)
      lentre1020++;
    if ((l/c) * 100 > 20)
      lmaior20++;
  }

  printf("\nNúmero de mercadorias que proporcionaram um lucro de menos de 10%%: %d", lmenor10);
  printf("\nNúmero de mercadorias que proporcionaram um lucro entre 10%% e 20%%: %d", lentre1020);
  printf("\nNúmero de mercadorias que proporcionaram um lucro de mais de 20%%: %d", lmaior20);

  printf("\n\nValor total de compra: %.2f", ctotal);
  printf("\nValor total de venda: %.2f", vtotal);
  printf("\nValor total de lucro: %.2f", ltotal);
  
  return 0;
  
}
