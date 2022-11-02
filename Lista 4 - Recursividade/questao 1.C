#include <stdio.h>
int contagem(int x);

int main(void) {
  int n;
  
  printf("Digite um numero: \n");
  scanf("%d", &n);

  printf("%d\n", contagem(n));
  
  return 0;
}

int contagem(int x) {

  //calcula o numero de digitos
static int total = 0;
  if (x == 0) {
    return total;
  }
  else {
    total++;
    return (contagem(x / 10));
  }
}
