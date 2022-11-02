/* Faça um  procedimento que recebe 3  valores inteiros por parâmetro e os exiba em ordem 
crescente.  Faça  um  programa  que  leia  N  conjuntos  de  3  valores  e  acione  o  procedimento 
para cada conjunto. (N deve ser lido do teclado) */

#include <stdio.h>

// declaração da função que calcula o maior dos tres valores
void maiorNum(int num1, int num2, int num3) {

  // possibilidades do num1 ser o menor

  if (num1 <= num2 && num2 <= num3) {
    printf("%d <= %d <= %d", num1, num2, num3);
  }
  else if (num1 <= num3 && num3 <= num2) {
    printf("%d <= %d <= %d", num1, num3, num2);
  }

  // possibilidades do num2 ser o menor

  else if (num2 <= num1 && num1 <= num3) {
    printf("%d <= %d <= %d", num2, num1, num3);
  } else if (num2 <= num3 && num3 <= num1) {
    printf("%d <= %d <= %d", num2, num3, num1);
  }

  // possibilidades do num3 ser o menor

  else if (num3 <= num1 && num1 <= num2) {
    printf("%d <= %d <= %d", num3, num1, num2);
  } else if (num3 <= num2 && num2 <= num1) {
    printf("%d <= %d <= %d", num3, num2, num1);
  }
}

int main(void) {
  int numConjuntos;
  printf("Informe a quantidade de conjuntos de 3 números que serão lidos:\n ");
  scanf("%d", &numConjuntos);

  /* Uso do i para contabilizar o número de repetições do for, se o i for menor
   * ou igual ao numero de conjuntos declarados anteriormente, a repetição
   * para.*/

  for (int i = 1; i <= numConjuntos; i++) {
    int num1, num2, num3;
    printf("\n\nInforme os valores do %dº conjunto\n", i);

    printf("Primeiro valor:\n ");
    scanf("%d", &num1);
    printf("Segundo valor:\n ");
    scanf("%d", &num2);
    printf("Terceiro valor:\n ");
    scanf("%d", &num3);
//Entra na função para verificar qual a ordem dos numeros indicados e depois de fazê-la, o programa continua a repetição
    maiorNum(num1, num2, num3);
  }
}
