#include <stdio.h>
/* Faça uma função que lê um número indeterminado de notas de alunos, calcula e
retorna a média das notas dos alunos aprovados (nota maior ou igual a 6). Faça
um programa que lê o número de alunos e imprime a média retornada pela função.
*/

float soma;

float media(int *i) {
  float mda;
  mda = soma / *i;
  return mda;
}

float verificaNota(int *i) {
  float nota;
  printf("\nDigite a nota do aluno: \n");
  scanf("%f", &nota);
  if (nota >= 6) {
    printf("Aluno aprovado\n\n");
  }
  if (nota < 6) {
    printf("Aluno reprovado\n\n");
  }
  soma += nota;
}

int main(void) {
  int alunos;
  printf("Digite o número de alunos desejados: \n");
  scanf("%d", &alunos);
  for (int i = 1; i <= alunos; i++) {
    printf("A media do aluno é: %d\n", i);
    verificaNota(&i);
    printf("A media entre os %dº alunos é: %.2f \n", i, media(&i));

  float verificaNota;
  }
  
}
