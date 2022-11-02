 #include <math.h>
#include <stdio.h>

// 15 < temperatura < 40
// pegar numeros aleatorios entre 15 e 40
// mostrar qual é o menor e o maior valor entre os selecionados
// calcular a media em um procedimento e chamar ele dentro do vetor?
// pegar o numero de dias que a temperatura foi menor que a media
// ver quando olho para a posição ou quando olho para o valor do vetor.

int n = 31;

void media(float *vetor) {
  float soma = 0, dias = 0, m;

  for (int i = 0; i < n; i++) {
    soma += vetor[i];
    m = soma / n;
  }
  printf("\nTemperatura média de Janeiro: %.1f", m);
  for (int i = 0; i < n; i++) {
    if (vetor[i] <m) {
      dias++;
    }
  }
  printf("\n%0.f dias foram abaixo da média", dias);
}

int main(void) {
  float V[n];
  int i = 0, num, c = 0, maior = 0, menor = 0;
  for (int x = 0; x < n; x++) {
    V[x] = rand() % 100;
  }
  
  do {
    num = rand() % 100;
    if ((num >= 15) && (num <= 40)) {
      V[i] = num;
      i++;
    }
  } while (i < n);
  
  maior = V[0];
  for (int i = 0; i < n; i++) {
    if(V[i] > maior) {
      maior = V[i];
    }
  }
  printf("Maior temperatura : %d\n", maior);
  menor = V[0];
  for (int i = 0; i < n; i++) {
    if(V[i] < menor) {
      maior = V[i];
    }
    }
  printf("Menor temperatura : %d\n", menor);
    media(V);
    return 0;
}
