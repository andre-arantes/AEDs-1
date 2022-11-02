/* A  prefeitura  de  uma  cidade  fez  uma  pesquisa  entre  os  seus  habitantes,  coletando  dados 
sobre  o  salário  e  número  de  filhos.  Faça  um  procedimento  que  leia  esses  dados  para  um 
número  não  determinado  de  pessoas,  calcule  e  exiba  a  média  de  salário  da  população  (a 
condição de parada pode ser um flag ou a quantidade N). Faça um programa que acione  o 
procedimento. */

#include <stdio.h>
// o parametro n é o numero de participantes da pesquisa
int mediaSalario(int n) {
  int filhos = 0;
  float salario = 0, soma = 0, media = 0;
  for (int x = 1; x <= n; x++) {
    printf("CIDADÃO Nº%d\n", x);
    printf("Digite o valor do salário recebido: \n");
    scanf("%f", &salario);
    printf("Digite o número de filhos: \n");
    scanf("%d", &filhos);
    soma += salario;
    media = soma / x;
    printf("\n\nA media do salario recebido entre os participantes é de: %.2f\n\n",media);
  }
}

int main(void) {
  int n;
  printf("Digite o número de participantes da pesquisa: \n");
  scanf("%d", &n);
  mediaSalario(n);

  // uso do n (que é o numero de participantes da pesquisa) como valor que
  // assume o parametro.
}
