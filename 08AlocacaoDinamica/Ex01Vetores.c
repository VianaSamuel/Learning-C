/*
Escreva o programa com as seguintes funcionalidades:
---------------------
Definições iniciais:
---------------------

  - No cabeçalho do módulo defina FALSE 0 e TRUE 1.

  -  Função aloca: recebe um inteiro n e um inteiro preenche:
  > Se o valor de preenche for TRUE, aloca um vetor de inteiros com n 
  elementos preenchido com zeros (dica: calloc).

  > Caso contrário, se preenche valer FALSE, aloca um vetor não preenchido
  de inteiros com n elementos (dica: malloc).

  > Retorna o ponteiro para o espaço alocado.

  - Função imprime: recebe um ponteiro inteiro v e o seu tamanho n e imprime os 
  valores do vetor v usando apenas aritmética de ponteiros. (não é permitido usar
  a sintaxe de colchetes)

  - Função preenche: recebe um ponteiro inteiro v, o seu tamanho n, um inteiro
  valor e um inteiro is_aleatorio:
  > Se is_aleatorio valer TRUE, preenche o vetor com valores
  aleatórios [0...100].

  > Caso contrário, preenche o vetor com valor.

  > Use apenas aritmética de ponteiros.

  - Função inverte: recebe um ponteiro inteiro v, e seu tamanho n:
  > Não possui retorno explícito.

  > Inverte a lista de valores armazenados em v.

-----------------------
No programa principal:
-----------------------

  - Declare dois ponteiros inteiros v1 e v2.

  - Chame a função aloca para v1, com preenche = FALSE e o parâmetro n a sua
  escolha.

  - Chame a função aloca para v2, com preenche = TRUE e o parâmetro n a sua
  escolha.

  - Imprima ambos os vetores.

  - Chame a função preenche para v1 com valor = 0 e is_aleatorio = TRUE.

  - Imprima v1 novamente.

  - Inverta v1 e v2 com a função inverte.

  - Imprima ambos os vetores novamente.

*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int *aloca(int n, int preenche){
  if (preenche == TRUE){
    int *v = (int *) calloc(n, sizeof(int));
    return v;
  }
  else{
    int *v = (int *) malloc(n * sizeof(int));
    return v;
  }
}

void imprime(int *v, int n){
  int i;
  for (i = 0; i < n; i++){
    printf("%d\n", *(v + i));
  }
}

void preenche(int *v, int n, int valor, int is_aleatorio){
  int i;
  if (is_aleatorio == TRUE){
    for (i = 0; i < n; i++)
      *(v + i) = rand()%100;
  }
  else{
    for (i = 0; i < n; i++)
      *(v + i) = valor;
  }
}

void inverte(int *v, int n){
  int vinv[n], i = 0, j;
  for (i = n; i >= 0; i--){
    vinv[i] = v[i];
  }
  for (j = n; j >= 0; j--){
    v[i] = vinv[j];
    i++;
  }
}

void linha(){
  printf("\n--------------------------------------------------\n");
}
  
int main(void) {
  int *v1 = NULL, *v2 = NULL;

  v1 = aloca(5, FALSE);
  v2 = aloca(3, TRUE);
  linha();
  printf("Vetor v1, função aloca, preenche = FALSE:");
  linha();
  imprime(v1, 5);
  linha();
  printf("Vetor v2, função aloca, preenche = TRUE:");
  linha();
  imprime(v2, 3);

  preenche(v1, 5, 0, TRUE);
  linha();
  printf("Vetor v1, função preenche, valor = 0,\nis_aleatorio = TRUE:");
  linha();
  imprime(v1, 5);

  inverte(v1, 5);
  inverte(v2, 3);
  linha();
  printf("Vetor v1, função inverte:");
  linha();
  imprime(v1, 5);
  linha();
  printf("Vetor v2, função inverte:");
  linha();
  imprime(v2, 3);

  return 0;
}