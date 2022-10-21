#include <math.h>
#include <stdio.h>
int main(void) {
  int num, pos=0, neg=0, zero=0, total, pn, pp, pz;
  do {
  printf("Digite um número\n");
  scanf("%d", &num);
    if (num < 0) {
      neg++;
    }
    if (num == 0) {
      zero++;
    }
    if (num > 0) {
      pos++;
    }
    //uso do 123 para parar a repetição dos números
  } while (num != 123);
  //criação das variáveis e suas equações
  total = pos + neg + zero;
  pn= (float)(neg*100)/total;
  pp= (float)(pos*100)/total;
  pz= (float)(zero*100)/total;
  printf("Percentual de números positivos:%d\n", pp);
  printf("Percentual de números iguais a zero:%d\n", pz);
  printf("Percentual de números negativos:%d\n", pn);
  }
