/*
Identifique o erro no programa a seguir,
de modo que seja exibido o valor 10 na tela.
  #include <stdio.h>
  int main()
  {
  int x, *p, **q;
  p = &x;
  q = &p;
  x = 10;
  printf("\n%d\n", &q);
  return(0);
  }
*/

#include <stdio.h>

int main(void) {
  int x, *p, **q;
  
  p = &x;
  q = &p;
  x = 10;
  printf("\n%d\n", **q);
  
  return(0);
}