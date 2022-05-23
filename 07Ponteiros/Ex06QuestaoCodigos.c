/*
Observe os dois programas a seguir, Código 1 e Código 2. Qual é a diferença entre eles?
Qual é o valor impresso para ptr em cada um dos códigos? Porque?

RESPOSTA: O laço de loop do código 1 está correto, alterando o ELEMENTO (*) do ponteiro.
O laço de loop do código 2 está errado, pois ele está alterando o ENDEREÇO do ponteiro.
*/

#include <stdio.h>
#include <stdlib.h>

void codigo1() {
  int *ptr, i;
  ptr = (int *) malloc(sizeof(int));
  *ptr = 10;
  for(i=0;i<5;i++){
  *ptr=*ptr+1;
  }
  printf("\nptr: %d", *ptr);
  free(ptr);
}

void codigo2() {
  int *ptr, i;
  ptr = (int *) malloc(sizeof(int));
  *ptr = 10;
  for(i=0;i<5;i++){
  ptr=ptr+1;
  }
  printf("\nptr: %p", ptr);
  free(ptr);
}

int main(void) {
  codigo1();
  codigo2();
  return 0;
}