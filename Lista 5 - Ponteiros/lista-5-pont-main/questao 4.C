#include <stdio.h>
int main()
{
 int x, *p, **q;
 p = &x;
 q = &p;
 x = 10;
 printf("\n%d\n", **q);
 return(0);
}


// A troca do "&q" por **q se faz necessária para que, ao invés de mostrar o endereço da variável q, mostrar o valor apontado pelo ponteiro Q(esse que aponta para o ponteiro P) que consequentemente aponta para X, que tem o valor de 10.
