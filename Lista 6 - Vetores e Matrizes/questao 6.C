#include <stdio.h>
/* Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na
 * tela a soma dos elementos abaixo da diagonal  principal. Mostre na tela os
 * elementos da diagonal principal também. */

void preencher(int M[4][4]) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      M[i][j] = rand() % 10;
    }
  }
}

void diagnMenor(int M[4][4]) {
  int s = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i > j) {
        s += M[i][j];
      }
    }
  }
  printf("\n\nA soma dos elementos da diagonal inferior é de: %d", s);
}

void diagnPrinci(int M[4][4]) {
  int s = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == j) {
        s += M[i][j];
      }
    }
  }
  printf("\n\nA soma dos elementos da diagonal principal é de: %d", s);
}

int main(void) {
  int X[4][4];
  preencher(X);
  printf("\nOs valores da matriz são os seguintes: \n\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", X[i][j]);
    }
    printf("\n");
  }
  diagnMenor(X);
  diagnPrinci(X);
}
