#include <stdio.h>
/*
Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que
receba uma matriz preenchida, calcule e retorne cada uma das somas a seguir (uma
função para cada letra abaixo):

a) da linha 4 de M
// indice 3
b) da coluna 2 de M
//indice 1
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz.
*/

int letraA(int m[5][5], float n) {
  // letra a 
  int s = 0;
  for (int j = 0; j < 5; j++) {
    s += m[3][j];
  }
  return s;
}

int letraB(int m[5][5], float n) {
  // letra b
  int s = 0;
  for (int i = 0; i < 5; i++) {
    s += m[i][1];
  }
  return s;
}

int letraC(int m[5][5], float n) {
  // letra c
  int s = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j) {
        s += m[i][j];
      }
    }
  }
  return s;
}

float letraD(float B[][5], float n) { // soma diagonal secundária ((0,4)+(1,3)+(2,2)+(3,1)+(4,0))
  float r = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((i + j) == 4)
        r += B[i][j];
    }
  }
  return r;
}

float letraE(float *B, float n) { // soma todos
  float r = 0;
  for (int i = 0; i < n; i++)
    r += B[i];
  return r;
}

void prMatriz(int m[5][5]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      m[i][j] = rand() % 10;
    }
  }
  
}

int main(void) {
  int X[5][5];
  prMatriz(X);
  float linha4 = letraA(X, 3);
  printf("\nSoma da linha 4: %.0f", linha4);
  float coluna2 = letraB(X, 1);
  printf("\nSoma da coluna 2: %.0f", coluna2);
  float diagP = letraC(X, 5);
  printf("\nSoma da diagonal principal: %.0f", diagP);
  //erro?
  float diagS = letraD(X, 5);
  printf("\nSoma diagonal secundária: %.0f", diagS);
  float soma = letraE(X, 5*5);
  printf("\nSoma de todos os elementos: %.0f", soma);
  return 0;
  }
