#include <stdio.h>
int main(void) {
  int rep = 0, fib = 0, num1 = 0, num2 = 1;
  printf(
      "Digite quantos números serão mostrados na sequência de Fibonacci: \n");
  scanf("%d", &rep);
  printf("0\n1\n");
  for (int x = 0; x <= rep; x++) {]
    //troca de variáveis que vai diminiundo conforme
    fib = num1 + num2;
    num1 = num2;
    num2 = fib;
    printf("%d\n", fib);
  }
}
