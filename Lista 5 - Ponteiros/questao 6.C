#include <stdio.h>

// Código 1
/* int main() {
  int *ptr, i;
  ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  for (i = 0; i < 5; i++) {
    *ptr = *ptr + 1;
  }
  printf("\nptr: %d", *ptr);
  free(ptr);
  return 0;
} */

// Código 2
/* int main() {
  int *ptr, i;
  ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  for (i = 0; i < 5; i++) {
    ptr = ptr + 1;
  }
  printf("\nptr: %p", ptr);
  free(ptr);
  return 0;
} */

/* O código 1 imprime o valor apontado pela ponteiro ptr, que nesse caso, como definido previamente, é o valor de 10 adicionado a cinco unidades que são adicionados ao valor apontado pelo ponteiro na repetição. */

/* Já o código 2 deveria imprimir o endereço de memória das 
5 posições acima de ptr, visto que ele pede a impressão do valor do ponteiro, e não do valor apontado por esse, porém o elemento free limpa o valor da variável. */
