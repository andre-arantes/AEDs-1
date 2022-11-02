/* Escreva  um  procedimento  que  recebe  3  valores  reais  X,  Y  e  Z  e  que  verifique  se  esses 
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o 
tipo  de  triângulo  formado.  Para  que  X,  Y  e  Z  formem  um  triângulo  é  necessário  que  a 
seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor 
do  que  a  soma  do  comprimento  dos  outros  dois  lados.  O  procedimento  deve  identificar  o 
tipo de triângulo formado observando as seguintes definições:  
 
- Triângulo Equilátero: os comprimentos dos 3 lados são iguais; 
- Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.  
- Triângulo Escaleno: os comprimentos dos 3 lados são diferentes. 
 
      Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e  
      para cada triângulo, acione o procedimento. */

#include <stdio.h>

void verificaTrian(int x, int y, int z) {
  if ((x < y + z) && (y < x + z) && (z < x + y)) {
    
    if ((x == y) && (y == z))
      printf("O seu triângulo é equilátero.\n");
    
    if ((x != z) && (y != x) && (z != y)) {
      printf("O seu triângulo é escaleno.\n");
    
    } else {
      printf("O seu triângulo é isóceles.\n");
    }
    
  } else {
    printf("O seu triângulo é invalido!");
  }
}

int main(void) {
  int l1, l2, l3;
  
  printf("Digite o primeiro valor\n");
  scanf("%d", &l1);
  
  printf("Digite o segundo valor\n");
  scanf("%d", &l2);
  
  printf("Digite o terceiro valor\n");
  scanf("%d", &l3);
  
  verificaTrian(l1, l2 ,l3);
  }
