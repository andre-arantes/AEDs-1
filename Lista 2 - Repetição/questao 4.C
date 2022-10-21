#include <stdio.h>

int main(void) {
  printf("Digite um valor de N:\n");
  int N = 0;
  double fat = 1, E = 0;

  scanf("%d", &N);
//uso de uma variável que soma a si mesmo adicionada a fatorial do numero desejado pelo usuario
  for (int x = 1; x <= N; x++) {
    E += 1 / fat;
    fat *= x;
    //depois é impressa as tres variaveis desejadas
    printf("%d %lf %lf \n", x, fat, E);
  }
}
