#include <stdio.h>
#include <time.h>
/* Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um
(ocupando as posições de 0 a 9 em cada vetor). Faça um outro procedimento que
receba dois vetores preenchidos e gera um novo vetor com os elementos desses 2
vetores intercalados de tal forma que nas posições ímpares do novo vetor estejam
os elementos do primeiro vetor e nas posições pares os elementos do segundo
vetor recebido por parâmetro.
Faça um procedimento que receba e exiba o conteúdo  de um vetor. Faça um
programa que faça as devidas declarações e acione os módulos para exemplificar o
seu uso. */

int x = 0, y = 0;

void imprimir(float V[], int n) {
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("%.0f ", V[i]);
  }
}

void novoVetor(float V1[10], float V2[10], float V3[20]) {
  for (int i = 0; i < 20; i++) {
    if (i % 2 == 0) {
      V3[i] = V1[x++];
    } else {
      V3[i] = V2[y++];
    }
  }
}

void preencher(float V1[10], float V2[10]) {
  for (int i = 0; i < 10; i++) {
    V1[i] = rand() % 10;
    V2[i] = rand() % 10;
  }
}

int main() {
  float A[10], B[10], C[20];
  srand(time(0));
  preencher(A, B);
  novoVetor(A, B, C);
  imprimir(A, 10);
  imprimir(B, 10);
  imprimir(C, 20);
}
