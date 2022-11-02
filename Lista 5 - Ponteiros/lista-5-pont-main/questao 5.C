#include <stdio.h>

int main(void) {
  int num1 = 12;
  float real = 55;
  char (carac) = 'c';
  
  int *pNum1 = &num1;
  float *pReal = &real;
  char *pCarac = &carac;

  //Impressão dos valores pré determinados.
  printf("Valor de num1: %d\n", num1);
  printf("Endereço de num1: %p\n", &num1);
  printf("Valor de pNum1: %d\n", *pNum1);
  printf("Endereço de pNum1: %p\n", &pNum1);
  
  printf("\nValor de real: %f\n", real);
  printf("Endereço de real: %p\n", &real);
  printf("Valor de pReal: %f\n", *pReal);
  printf("Endereço de pReal: %p\n", &pReal);

  printf("\nValor de carac: %c\n", carac);
  printf("Endereço de carac: %p\n", &carac);
  printf("Valor de pCarac: %c\n", *pCarac);
  printf("Endereço de pCarac: %p\n", &pCarac);
  
  //Requisição de novos valores para substituir as variáveis que já foram pré determinadas
  printf("\n\nDigite um novo valor para num1: ");
  scanf("%d", &num1);
  printf("\nDigite um novo valor para real:");
  scanf("%f", &real);
  printf("\nDigite um novo caracter:");
  scanf(" %c", &carac);
  
  //Impressão das novas variáveis
  printf("\n\nValor de num1: %d\n", num1);
  printf("Endereço de num1: %p\n", &num1);
  printf("Valor de pNum1: %d\n", *pNum1);
  printf("Endereço de pNum1: %p\n", &pNum1);

  printf("\nValor de real: %f\n", real);
  printf("Endereço de real: %p\n", &real);
  printf("Valor de pReal: %f\n", *pReal);
  printf("Endereço de pReal: %p\n", &pReal);

  printf("\nValor de carac: %c\n", carac);
  printf("Endereço de carac: %p\n", &carac);
  printf("Valor de pCarac: %c\n", *pCarac);
  printf("Endereço de pCarac: %p\n", &pCarac);
}
