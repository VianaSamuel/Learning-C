/*
Explique cada uma das expressões a seguir, indicando a diferença entre elas:
  p++;
  (*p)++;
  *(p++);
Qual informação se refere a expressão *(p+10)?
*/

#include <stdio.h>

void linha(){
  printf("----------------------------------------");
}

int main(void) {
  int v[15], i, *p;
  p = v;

  printf("\n\n| Vetor:");
  for(i = 0; i < 12; i++){
    v[i] = i + 1;
    printf(" %d", v[i]);
  }
  printf("\n| Endereço de v[0]: %d\n\n\n", v);

  p++;
  linha();
  printf("\nExpressão p++: %d\n", p++);
  linha();
  printf("\nO ENDEREÇO de v[0] é INCREMENTADO.\nPor ser INT, o acréscimo é de 4 bytes.\n\n\n");
  p = v;

  (*p)++;
  linha();
  printf("\nExpressão (*p)++: %d\n", *p);
  linha();
  printf("\nO VALOR de v[0] é INCREMENTADO.\n\n\n");
  (*p)--;

  p++;
  linha();
  printf("\nExpressão *(p++): %d\n", *p);
  linha();
  printf("\nO VALOR de v[0 + 1] é SELECIONADO.\n\n\n");
  p--;

  p += 10;
  linha();
  printf("\nExpressão *(p+10): %d\n", *p);
  linha();
  printf("\nO VALOR de v[0 + 10] é SELECIONADO.\n\n\n");
  p -= 10;
  
  return 0;
}