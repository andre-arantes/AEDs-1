#include <stdio.h>
/* Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela no programa principal. */

void decrescente(int *a, int *b) {
  int c = 0;
//Substituição dos valores para aparecer na ordem desejada que é, nesse caso do maior para o menor
  if (*a < *b) {
    c = *a;
    *a = *b;
    *b = c;
  }
}

int main(void) {
  int num1, num2;
  printf("Digite dois valores inteiros: \n");
  scanf("%d %d", &num1, &num2);
  decrescente(&num1, &num2);
  printf("\nx=%d \ny=%d", num1, num2);
  return 0;
}
