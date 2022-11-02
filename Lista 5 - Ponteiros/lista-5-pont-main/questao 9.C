#include <stdio.h>
#include <math.h>
/* Implemente um procedimento que calcule o comprimento e a área de uma circunferência de raio R. Esse procedimento deve obedecer ao cabeçalho a seguir:

void calcCircunferencia (float R, float *compr, float *area)

A área da superfície e o volume são calculados pelas equações:
C=2*PI*R e A =PI*R2

No programa principal faça a leitura do raio, acione o procedimento e exiba os resultados do
comprimento e área calculados por ele. */

void calcCircunferencia (float R, float *compr, float *area) {
  *compr = 2*3.14*R;
  *area = 3.14*pow(R,2);
  printf("O valor da area da cincunferência é: %.2f\n", *area);
  printf("O valor do comprimento da cinfunferência é: %.2f\n", *compr);
}

int main(void) {
  float raio, comprimento, a;
  printf("Digite o valor do raio da circunferência desejado:\n");
  scanf("%f", &raio);
  calcCircunferencia(raio, &comprimento, &a);
  return 0;
}
