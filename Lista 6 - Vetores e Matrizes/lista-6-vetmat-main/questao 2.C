
#include <stdio.h>
/* Faça um procedimento que preencha um vetor X de 10 elementos. A seguir faça uma função que receba um vetor preenchido, teste e copie todos os valores negativos deste vetor para um novo vetor (sem deixar elementos vazios entre os valores copiados), retornando este vetor como resultado. Faça um procedimento que recebe e exibe o conteúdo de um vetor. Faça um programa que faça as devidas declarações e acione os módulos para exemplificar o seu uso.
*/
int n = 10, c =0;

void recebe(int n, float v1[n]) {
  int neg = 0, x = 0;
  for (int i = 0; i < n; i++) {
    if (v1[i] < 0) {
      c++;
    }
  }
  printf("\nneg: %d\n", c); // quantidade de negativos
  float vneg[neg];
  for (int i = 0; i < n; i++) {
    if (v1[i] < 0) {
      vneg[x++] = v1[i];
      printf("%.0f ", vneg[x - 1]);
    }
  }
}

int main(void) {
  int x;
  float A[n];
  printf("Digite 10 números: \n");
  for (int i = 0; i < n; i++) {
    scanf("%f", &A[i]);
  }
  recebe(n, A);
  return 0;
}
