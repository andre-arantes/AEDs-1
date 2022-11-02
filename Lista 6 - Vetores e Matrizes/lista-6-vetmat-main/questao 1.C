#include <stdio.h>
/* Faça um procedimento que receba e preencha um vetor com as notas de uma turma de 10 alunos. Faça um outro procedimento que receba um vetor preenchido com as notas, calcule a média da turma e conte quantos alunos obtiveram nota acima da média. Esse procedimento deve exibir a média e o resultado da contagem. Faça um programa que declare as devidas variáveis e acione os procedimentos. */

void media(float notas[10]) {
  float soma = 0, media, cont = 0;
  for (int x = 0; x < 10; x++) {
    // passagem por todo o vetor para que a soma de todos os valores seja efetivada
    soma += notas[x]; 
    //soma se faz como uma variável que soma a si mesma em todo valor de x digitado pelo usuário
  }
  printf("A soma de todas as notas dos alunos é de: %.2f\n", soma);
  media = soma / 10;
  printf("A média dos alunos é: %.2f\n", media);
  for (int x = 0; x < 10; x++) {
    if (notas[x] > media) {
      cont++;
    }
  }
  printf("O número de alunos que ficaram acima da média é: %.0f", cont);
}
int main(void) {
  int x;
  float notas[10];
  //declaração de um vetor notas que possui 10 posições, como definido em cima, 10 é igual a 10.
  for (x = 0; x < 10; x++) {
    printf("Digite a nota do %dº aluno: ", x + 1);
    //o x+1 é necessário porque o primeiro índice é 0, logo para pedir o primeiro número é necessário pular o índice 0.
    scanf("%f", &notas[x]);
    // esse scanf serve para preencher e armazenar as posições dos valores de x digitados pelo usuário
  }
  media(notas);
  return 0;
}
