/*
Defina uma estrutura triângulo que possui um vetor de valores reais correspondendo aos
seus lados, e um caracter correspondendo ao seu tipo (‘E’: equilátero, ‘I’: isósceles, ‘S’:
escaleno). Receba do usuário os lados de um triângulo, armazene-os na estrutura e
preencha o campo “tipo” com o tipo correspondente. Considere as definições a seguir:
  - Equilátero: 3 lados iguais
  - Isósceles: quaisquer 2 lados iguais
  - Escaleno: 3 lados diferentes
*/

#include <stdio.h>

typedef struct triangulo_{
  int lado[3];
  char tipo;
} triangulo;

int main(void) {
  int i;
  triangulo t;
  printf("\n");
  for (i = 0; i < 3; i++){
    printf("Digite o lado %d do triângulo: ", i + 1);
    scanf("%d", &t.lado[i]);
  }

  if (t.lado[0] == t.lado[1] && t.lado[1] == t.lado[2]){
    t.tipo = 'E';
  }
  else if (t.lado[0] == t.lado[1] || t.lado[0] == t.lado[2] || t.lado[1] == t.lado[2]){
    t.tipo = 'I';
  }
  else if (t.lado[0] != t.lado[1] || t.lado[0] == t.lado[2]){
    t.tipo = 'S';
  }
  printf("\nTipo do triângulo: ");
  if (t.tipo == 'E') printf("E (equilátero)");
  else if (t.tipo == 'I') printf("I (isósceles)");
  else if (t.tipo == 'S') printf("S (escaleno)");

  return 0;
}