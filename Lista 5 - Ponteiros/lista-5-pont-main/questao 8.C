#include <stdio.h>
/*Faça um programa que leia três valores inteiros e chame uma função que  receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela no programa principal.   */

void calculo(int *pa, int *pb, int *pc) {
  int aux = 0;
  if ((*pa < *pb) && (*pc < *pb) && (*pc > *pa)) { // ordem crescente: acb
    aux = *pb;
    *pb = *pc;
    *pc = aux;
  } else if ((*pb < *pa) && (*pa < *pc)) { // ordem crescente: bac
    aux = *pa;
    *pa = *pb;
    *pb = aux;
  } else if ((*pb < *pc) && (*pc < *pa)) { // ordem crescente: bca
    aux = *pb;
    *pb = *pc;
    *pc = aux;
    aux = *pc;
    *pc = *pa;
    *pa = aux;
  } else if ((*pc < *pb) && (*pb < *pa)) { // ordem crescente: cba
    aux = *pa;
    *pa = *pc;
    *pc = aux;
  } else if ((*pc < *pa) && (*pa < *pb)) { // ordem crescente: cab
    aux = *pc;
    *pc = *pa;
    *pa = aux;
    aux = *pc;
    *pc = *pb;
    *pb = aux;
  } else if ((*pa == *pb) && (*pb == *pc)) { 
    printf("O valor é 1\n"); }
}
int main(void) {
  int x, y, z;
  printf("Digite três valores inteiros: \n");
  scanf("%d %d %d", &x, &y, &z);
  calculo(&x, &y, &z);
  printf("Os valores em ordem crescente são representados por: %d %d %d", x, y, z);
  return 0;
}
