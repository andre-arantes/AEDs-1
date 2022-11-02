#include <stdio.h>
/* Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo.  
 
S = 1 + 1/1! + 1/2!  + 1/3! + ...+1 /N! 
 
Faça um programa que leia N e imprima o valor retornado pela função. 
 */
 float formula (int N) {
  float fat = 1, S = 0;
  for (int i = 1; i<=N; i++) {
  S += 1/fat;
  fat *= i;
  }
  return S;
}

int main(void) {
  int num;
  printf("Digite um valor inteiro e positivo\n");
  scanf("%d", &num);
  printf("O resultado é: %f", formula (num));
  return 0;
}
