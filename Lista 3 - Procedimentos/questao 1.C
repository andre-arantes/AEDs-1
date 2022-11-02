/* Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a 
letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for 
‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 
notas de N alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado) */

#include <stdio.h>
/* Declaração de notas como variáveis globais*/
float nota1 = 0, nota2 = 0, nota3 = 0;


int main(void) {
  int a;
  float mediaA, mediaP;
  char(op);
  printf("Digite o número de alunos: \n");
  scanf("%d", &a);
  for (int x = 0; x < a; x++) {
    printf("\nDigite o valor das notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("\nDigite o procedimento escolhido: (P ou A)\n");
    scanf(" %c", &op);
  /* Declaração das equações de mediaA e mediaP*/
    mediaA = (nota1 + nota2 + nota3) / 3;
    mediaP = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;

    switch (op) {
    case 'A':
      printf("\nA média das notas é de: %f \n", mediaA);
      break;
    case 'P':
      printf("\nA média das notas é de: %f \n", mediaP);
      break;
    }
  }
}
