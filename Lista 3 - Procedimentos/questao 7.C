#include <stdio.h>

/* Faça uma  função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. 
A  função  deve  retornar  um  valor  lógico  (true  ou  false).  Faça  um  programa  que  lê  N 
números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, 
dependendo se foi retornado verdadeiro ou falso pela função.  */

// o parametro N recebe o valor de num e entra na condicional do num
int verificaNum (int N){
  if (N >= 0) {
    printf("True\n\n");
  } else {
    printf("False\n\n");
  }
  }

int main(void) {
  int num;
  //Os valores não param de ser informados até que o usuário digite 777
  do { 
    printf("Digite o valor de um número inteiro:\n");
  scanf("%d", &num);
  verificaNum (num);
    } while (num != 777);
}
