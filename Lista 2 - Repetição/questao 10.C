#include <stdio.h>

int main(void) {
  int voto=1, c1=0, c2=0, c3=0, c4=0, branco=0, nulo=0, total=0; // declaração das variáveis 
  while (voto != 0) {
    printf ("\nDigite o seu voto: \n");
    scanf ("%d", &voto);
    if (voto == 1) {
      c1++;
    } else if (voto == 2) {
      c2++;
    } else if (voto == 3) {
      c3++;
    } else if (voto == 4) {
      c4++;
    } else if (voto == 5) {
      nulo++;
    } else if (voto == 6) {
      branco++;
    } else {
      printf ("Voto Inválido\n\n"); // caso seja digitado um valor diferente das opções 
    }
  }
  total = c1 + c2 + c3 + c4 + branco + nulo;
  
  printf ("\nVotos Candidato 1: %d\n", c1);
  printf ("Votos no candidato 2: %d\n", c2);
  printf ("Votos no candidato 3: %d\n", c3);
  printf ("Votos no candidato 4: %d\n", c4);
  printf ("Votos Nulo: %d\n", nulo);
  printf ("Votos em Branco: %d\n", branco);
  printf ("\nTotal de Votos: %d\n", total);
}
