#include <stdio.h>

int main(void) {
  
   int linha = 1, n = 1;
   printf("\nDigite um número: ");
   scanf("%d", &linha);
   int i = linha, j;

   for(i = 1; i<=linha; i++) {
      for(j = 1; j <= i; j++)
         printf("%d ", n++);
      printf("\n");
    }

  return 0;
  
}
