#include <stdio.h>

/* Faça  um  procedimento  que  recebe  a  média  final  de  um  aluno,  identifica  e  exibe  o  seu 
conceito,  conforme  a  tabela  abaixo.  Faça  um  programa  que  leia  a  média  de  N  alunos, 
acionando o procedimento para cada um deles. (N deve ser lido do teclado) 
 
 
Nota Conceito 
Até 39 -- F 
40 a 59 -- E 
60 a 69 -- D 
70 a 79 -- C 
80 a 89 -- B 
A partir de 90 -- A */


/* Segundo passo: entrar em uma repetição em perguntar a nota do aluno*/
/* Terceiro passo: para cada vez que a nota for informada, imprimir o conceito do aluno.*/
void contAlunos (int N) {
  int media;
    printf("\nDigite a media final da nota do aluno \n");
  scanf("%d", &media);
  
    if (media < 39) {
    printf("O conceito tirado é 'F'\n");
  } else if ((media >= 40) &&(media < 59)) {
    printf("O conceito tirado é 'E'\n");
  
  } else if ((media >= 60) &&(media < 69)) {
    printf("O conceito tirado é 'D'\n");
  
  } else if ((media >= 70) &&(media < 79)) {
    printf("O conceito tirado é 'C'\n");
  
  }  else if ((media >= 80) &&(media < 89)) {
    printf("O conceito tirado é 'B'\n");
  
  }  else if (media >= 90) {
    printf("O conceito tirado é 'A'\n");
      }
}

int main(void) {
  int media, a;
  printf("Informe a quantidade de alunos na qual a média será calculada: \n");
  scanf("%d", &a);
  for (int i = 1; i <= a; i++) {
    
    contAlunos(a);
    }
  }


    
