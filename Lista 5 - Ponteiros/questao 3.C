#include <stdio.h>

int main(void) {
  int valor = 3;
  int *valorPtr;

  valorPtr = &valor;
  printf("%d \n",valor);
  printf("%d \n",*valorPtr);
  printf("%p \n",&valor);
  printf("%p \n",valorPtr);
}

/* Se o endereço de uma variável valor foi atribuído a um ponteiro valorPtr, quais alternativas
são verdadeiras? Justifique sua resposta.
a) valor = = &valorPtr
b) valor = = *valorPtr
c) valorPtr = = &valor
d) valorPtr = = *valor */

/* As alternativas B e C são as verdadeiras, visto que o valor apontado pelo ponteiro valorPtr assume o endereço de valor
A alternativa C está correta pelo fato de valorPtr ser atribuido diretamente ao endereço da variável valor.*/
