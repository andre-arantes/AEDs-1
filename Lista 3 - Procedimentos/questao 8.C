#include <stdio.h>

/* Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e
retorna o valor de S, calculado segundo a fórmula abaixo.

S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)

Faça um programa que leia N e imprima o valor retornado pela função. */

float formula(int N) {
  float s = 0, res = 0;
  for (float x = 1; x <= N; x++) {
    s = (((x * x) + 1) / ((x + 3)));
  res += s;
    }
  return res;
}

int main(void) {
  int n;
  printf("Digite um valor de X\n");
  scanf("%d", &n);
  printf("O valor de S é igual a: %0.2f\n", formula(n));
  return 0;
}
