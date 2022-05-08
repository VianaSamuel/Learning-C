/*
Se o endereço de uma variável valor foi atribuído a um ponteiro valorPtr,
quais alternativas são verdadeiras? Justifique sua resposta.
  a) valor == &valorPtr
  b) valor == *valorPtr
  c) valorPtr == &valor
  d) valorPtr == *valor
*/

#include <stdio.h>

void linha(){
  printf("\n-------------------------------------------------------------\n");
}

int main(void) {
  printf("\nSe o endereço de uma variável valor foi atribuído a um ponteiro valorPtr,\nquais alternativas são verdadeiras? Justifique sua resposta.\n");
  linha();
  printf("\na) valor == &valorPtr // FALSO, pois a variável 'valor'\nestá sendo comparada ao endereço do ponteiro.\n");
  linha();
  printf("\nb) valor == *valorPtr // VERDADEIRO, pois a variável 'valor'\nestá sendo comparada ao valor do ponteiro.\n");
  linha();
  printf("\nc) valorPtr == &valor // VERDADEIRO, pois o ponteiro está\nsendo comparado ao endereço da variável 'valor'.\n");
  linha();
  printf("\nd) valorPtr == *valor // FALSO, pois o ponteiro está\nsendo comparado ao valor da variável 'valor'.\n");
  linha();
  return 0;
}