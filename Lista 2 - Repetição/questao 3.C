#include <stdio.h>

int main() {
  int n, por2 = 0, por9 = 0, por5 = 0, i = 0;

  do {
    //uso do i para indicar a posição do numero indicada que é pedida para o usuário
    printf("\nInforme o %dº número:\n ", i + 1);
    scanf("%d", &n);

    por5 += n % 5 == 0 && n;
    por2 += n % 2 == 0 && n;
    por9 += n % 9 == 0 && n;

    if (n % 5 && n % 9 && n % 2 || n == 0) {
      printf("Número não é divisível pelos valores\n");
    }
    i++;
//uso do while i menor que 10 para que tenha até 10 repetições
  } while (i < 10);

  printf("Quantidade de números divisíveis por 2: %d\n", por2);
  printf("Quantidade de números divisíveis por 3 e 9: %d\n", por9);
  printf("Quantidade de números divisíveis por 5: %d\n", por5);
}
