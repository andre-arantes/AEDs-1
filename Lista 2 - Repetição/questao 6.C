#include <stdio.h>

int main(void) {
  printf("Digite um número inteiro e positivo: \n");
  int n = 0;
  float s = 0;

  scanf("%d", &n);
//uso do for para fazer a repetição referente ao numero digitado pelo usuário e o uso da variável X para indicar o número de vezes que a operação é realizada
  for (float x = 1; x <= n; x++) {
    s += 1 / x;
    printf("%f \n", s);
  }
  printf("Resultado: %f", s);
}
