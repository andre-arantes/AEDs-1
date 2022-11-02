#include <stdio.h>
/* Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis.

O programa deve comparar os endereços das variáveis e exibir o maior deles.*/

int main(void) {
  int x, y;
  int *px;
  int *py;
  printf("Digite dois números inteiros: \n");
  scanf("%d %d", &x, &y);
  // uso do %p para indicar que deseja pegar o endereço da variável x
  printf("Esse é o endereço da primeira variável: %p \n", &x);
  printf("Esse é o endereço da segunda variável: %p \n", &y);
//referenciando que o valor do endereço de x 
  px = &x;
  py = &y;

  if (px > py) {
    printf("%p é o maior endereço\n", px);
} else {
    printf("%p é o maior endereço\n", py);
  }
}
