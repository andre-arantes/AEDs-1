#include <stdio.h>

double serie(int i);
double soma = 0;
int main(void) {
  int n;

  do {
    printf("Digite o valor de N maior que 0: ");
    scanf("%d", &n);
  } while (n <= 0);
// iniciação de variável
  for (int i = 1; i <= n; i++) {
  soma += serie(i);
}

  printf("%lf", soma);

  return 0;
}

double serie(int i) {

  if (i == 1) {
    return 1;
  } else {
    return 1 / (i * serie(i - 1));
  }
}
