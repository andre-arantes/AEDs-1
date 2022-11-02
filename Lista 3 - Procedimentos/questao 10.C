/* Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria 
desse nadador de acordo com a tabela abaixo. 
 
Idade (anos) Categoria 
5 a 7 F 
8 a 10 E 
11 a 13 D 
14 a 15 C 
16 a 17 B 
Acima de 18 A 
 
      Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela  
      função. 
 */

#include <stdio.h>

// Declaração da variável idade para facilitar o seu uso ao longo de todo o
// exercício, visto que ela seria usada sempre //
int idade;
// O parametro N serve para receber a idade digitada pelo usuário anteriormente,
// dentro do int main. //

int calculoCategoria(int N) {
  if ((idade >= 5) && (idade <= 7)) {
    printf("A categoria do nadador selecionado é: F\n\n");
  } else if ((idade >= 8) && (idade <= 10)) {
    printf("A categoria do nadador selecionado é: E\n\n");
  } else if ((idade >= 11) && (idade <= 13)) {
    printf("A categoria do nadador selecionado é: D\n\n");
  } else if ((idade >= 14) && (idade <= 15)) {
    printf("A categoria do nadador selecionado é: C\n\n");
  } else if ((idade >= 16) && (idade <= 17)) {
    printf("A categoria do nadador selecionado é: B\n\n");
  } else if (idade >= 18) {
    printf("A categoria do nadador selecionado é: A\n\n");
  } else {
    printf("Idade inválida\n\n");
  }
}

/* criação de uma repetição que imprime a idade de acordo com o numero de nadadores desejados */
int main() {
  int n;
  printf("Digite o número de nadadores desejados: \n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    printf("Digite a idade do %dº nadador: \n", i);
    scanf("%d", &idade);
    calculoCategoria(idade);
  }
}
