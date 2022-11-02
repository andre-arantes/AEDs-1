#include <stdio.h>

int div(int x, int y);

int main(void) {
  int n1, n2;

  printf("Digite o numerador e o denominador: \n");
  scanf("%d %d", &n1, &n2);

  printf("%d", div(n1, n2));

  return 0;
}

int div(int x, int y) {
// calcular resto da divisão pelo metodo de subtração sucessiva
if (y > x) {
  return x;
}
else {
  return (div(x- y, y));
}

}
