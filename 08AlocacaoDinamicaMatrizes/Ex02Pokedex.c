/*
Escreva o programa com as seguintes funcionalidades:
-----------------------
No programa principal:
-----------------------

  - Defina a estrutura char **meus_pokemons (ponteiro de ponteiros) que vai armazenar a lista de
  pokemons que um usuário possui;

  - Pergunte ao usuário quantos pokemons ele possui, e aloque a primeira dimensão da estrutura meus_pokemons;
  
  - Use um laço de repetição para ler os nomes dos pokemons do usuário. Note que a cada iteração se deve alocar
  dinamicamente o número de caracteres necessários (cada nome tem no máximo 30 caracteres);
  
  - Chame a função encontra_nome (especificação a seguir) e imprima na tela se o usuário possui o pokemon Togepi;

  - Chame a função lista_por_incial (especificação a seguir) e com o seu retorno imprima todos os pokémons do usuário
  que começam com a letra “p” (ex: pikachu, pidgey, paras).

--------------------------
Funções para implementar:
--------------------------

  - encontra_nome(char **lista, char *nome): dada uma lista de nomes e um nome, se o nome estiver na lista retorna
  a sua posição, senão retorna ERRO. Defina a flag ERRO no cabeçalho do código como uma constante valendo -1 (#define);

  - lista_por_incial(char **lista, char letra): dada uma lista de nomes e uma letra, retorna todos os nomes da lista
  que começam com a letra solicitada. Aloque dinamicamente a lista de retorno.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 31
#define ERRO -1

void divisor(){
  printf("\n------------------------------------------\n");
}

int encontra_nome(char **lista, char *nome, int num_linhas) {
  int compara, i;

  for (i = 0; i < num_linhas; i++) {
    compara = strcmp(lista[i], nome);
    if (compara == 0) return i;
  }
  
  return ERRO;
}

int controla_b = 0;

char **lista_por_incial(char **lista, char letra,  int num_linhas){
  int i, tamanho;
  char **resultado = NULL;

  for (i = 0; i < num_linhas; i++){
    if (*(*(lista + i) + 0) == letra){
      tamanho = strlen(*(lista + i));
      resultado = realloc(resultado, controla_b * sizeof(char));
      *(resultado + controla_b) = malloc(tamanho * sizeof(char));
      strcpy(*(resultado + controla_b), *(lista + i));
      controla_b++;
    }
  }
  return resultado;
}

int main(void) {
  char **meus_pokemons = NULL, nome[MAX];
  int qntd_linhas, linha, tam_texto, i;

  printf("\nDigite quantos pokémons você tem:\n");
  scanf("%d", &qntd_linhas);

  divisor();

  meus_pokemons = (char **) malloc(qntd_linhas * sizeof(char *));

  for (linha = 0; linha < qntd_linhas; linha++){
    printf("\nDigite o nome de seu pokemón %d:\n", (linha + 1));
    scanf("%30s", nome);
    tam_texto = strlen(nome);
    meus_pokemons[linha] = malloc(tam_texto * sizeof(char));
    strcpy(meus_pokemons[linha], nome);
  }

  divisor();

  for (linha = 0; linha < qntd_linhas; linha++){
    printf("\nPokémon %d: %s\n", (linha + 1), meus_pokemons[linha]);
  }

  divisor();

  char buscado[MAX];
  printf("\nDigite um nome para ser buscado:\n");
  scanf("%30s", buscado);
  int a = encontra_nome(meus_pokemons, buscado, qntd_linhas);
  if (a == ERRO) printf("\nPokemón '%s' não encontrado!\n", buscado);
  else printf("\nPokemón '%s' encontrado!\nEndereço: posição %d\n", buscado, (a + 1));

  divisor();

  char inicial;
  printf("\nDigite uma inicial para ser buscada:\n");
  scanf(" %c", &inicial);
  char **retorno = lista_por_incial(meus_pokemons, inicial, qntd_linhas);
  if (controla_b != 0){
    printf("\nLista de pokemóns que começam com a inicial '%c':", inicial);
    for (i = 0; i < controla_b; i++)
      printf("\nPokemón: %s", retorno[i]);
  }
  else
   printf("\nNão foi encontrado nenhum pokemón com a inicial '%c'!", inicial);
  
  for (linha = 0; linha < qntd_linhas; linha++){
    free(meus_pokemons[linha]);
  }

  free(meus_pokemons);

  return 0;
}