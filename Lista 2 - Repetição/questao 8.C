#include <stdio.h>
int main(void) {
  double rep = 0, fib = 0, num1 = 0, num2 = 1;
  printf("Digite o numero para sequência de Fibonacci: \n");
  scanf("%lf", &rep);
  printf("0\n1\n");
  for (int x = 0; x < rep; x++) {
    fib = num1 + num2;
    num1 = num2;
    num2 = fib;

    if (fib < rep) {
      printf("%lf\n", fib);
    }
  }
}
