#include <stdio.h>

int divisao(int x, int y);
int total = 0;

int main(void) {
  int n1, n2;

  printf("Digite o numerador e o denominador: \n");
  scanf("%d %d", &n1, &n2);

  printf("%d", div(n1, n2));

  
  return 0;
}

int divisao(int x, int y) {

função que calcula a divisao
if (y > x) {
  return total;
}
else {
  total++;
  return (divisao(x- y, y));
}

}
