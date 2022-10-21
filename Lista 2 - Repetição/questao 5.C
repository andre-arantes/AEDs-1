#include <stdio.h>
float maior = 0;
int 
fil=0,filho=0,acima100=0,abaixo100=0,porcentAcima,porcentAbaixo,total=0; //variaveis globais para que sejam definidas no primeirro modulo e no modulo main sejam executadas

float media(int n, float *mediaf) { 
  // definir o ms, a media de filhos, salarios abaixo e acima de 100 reais tem e a soma dos salarios
  float salario = 0, soma = 0, media = 0, somaf = 0;
  for (int x = 1; x <= n; x++) {
    printf("\nDigite o salario:");
    scanf("%f", &salario);
    soma += salario;
    if (maior < salario) {
      maior = salario;
    }
    printf("\nNumeros de filhos:");
    scanf("%d", &filho);
    somaf += filho;
    *mediaf = somaf / n;
    if (salario < 100) {
      abaixo100++;
    } else {
      acima100++;
    }
    total = acima100 + abaixo100;
    porcentAcima = acima100 * 100 / total;
    porcentAbaixo = abaixo100 * 100 / total;
  }
  media = soma / n;
  return media;
}

int main(void) {
  int n;
  float m = 0;
  printf("\nDigite quantas pessoas participaram da pesquisa: ");
  scanf("%d", &n);
  printf("A media é  R$%2.f", medias(n, &m));
  printf("\nO maior salario e: R$%2.f", maior);
  printf("\nA media de filhos e: %.2f", m);
  printf("Percentual dos salários abaixo de 100: %d %%\n",porcentAbaixo);
  printf("Percentual dos salários acima de 100: %d %%\n",porcentAcima);

  return 0;
}
