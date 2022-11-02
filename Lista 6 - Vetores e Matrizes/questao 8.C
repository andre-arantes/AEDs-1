#include <stdio.h>
#include <time.h>

int aux = 0;

// preenche matriz (10, 10) e a escreve
void preencher(float M[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      M[i][j] = rand() % 10;
      printf("%.0f ", M[i][j]);
    }
    printf("\n");
    }
  }

// A) troca de linha 2 com a 8
void trocaA(float M[10][10]) {
  for (int i = 0; i < 10; i++) {
      aux = M[1][i];
      M[1][i] = M[7][i];
      M[7][i] = aux;
  }
}
// B) troca de coluna 4 com a 10
void trocaB(float M[10][10]) {
  for (int i = 0; i < 10; i++) {
      aux = M[i][3];
      M[i][3] = M[i][9];
      M[i][9] = aux;
  }
}
// C) trocar diagonal principal com a secundária
void trocaC (float V[10][10]) {
  float D[10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if ((i+j) == 9 || i == j) {
        D[i] = V[i][i];
        V[i][i] = V[i][j];
        V[i][j] = D[i];
      }
    }
  }
}
// D) troca de linha 5 com a coluna 10
void trocaD (float M[10][10]) {
   for (int i = 0; i < 10; i++) {
    aux = M[4][i];
    M[4][i] = M[i][9];
    M[i][9] = aux;
  }
}

int main(void) {
  float X[10][10];
  srand(time(0));
  printf("Primeira matriz: \n");
  preencher(X);
  printf("\nNova matriz após trocas: \n");
  trocaA(X);
  trocaB(X);
  trocaC(X);
  trocaD(X);
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%0.f ", X[i][j]);
    }
    printf("\n");
  }
  return 0;
}
