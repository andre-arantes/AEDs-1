#include <stdio.h>

int somar(int x);

int main(void) {
int n;

  printf("Digite um numero: \n");
  scanf("%d", &n);

  printf("%d\n", somar(n));  
}

int somar (int x) {

if (x == 0) {
  return 0;
}
else {
  return (x % 10 + somar(x/10));
}
}
