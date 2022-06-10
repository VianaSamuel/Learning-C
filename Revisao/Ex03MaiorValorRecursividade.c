/*
Implemente uma função que recebe um vetor unidimensional e retorna o maior valor
da estrutura. Você pode incluir parâmetros adicionais em sua solução. Você deve
implementar duas soluções:
  a. Solução iterativa.
  b. Solução recursiva.
*/

#include <stdio.h>

int recursiva(int *v, int p, int m){
  if (p == 0) return m;
  else{
    if (v[p] >= m){
      m = v[p];
    }
    return recursiva(v, p - 1, m);
  }
}

int main(void) {
  int i;
  int vetor[7] = {10, 999, 34, 23, 55, 1024, 12};
  
  int maior = -999;
  for (i = 0; i < 7; i++){
    if (vetor[i] >= maior)
      maior = vetor[i];
  }
  printf("\nResultado da solução iterativa: %d", maior);

  maior = -999;
  int posicao = 7;
  int maior2 = recursiva(vetor, posicao, maior);
  printf("\nResultado da solução recursiva: %d", maior2);
  return 0;
}