#include <stdio.h>
/*
    X   Y    PX   PY
1º  5   6    5    6
2º  5   6    6    6
3º  5   6    6    36
4º  5   6    36   38
5º  5   5    38   38   
*/
void func(int *px, int *py)
{
px = py;
*py = (*py) * (*px);
*px = *px + 2;
}
int main ()
{
 int x, y ;
 printf("Digite dois numeros: \n");
 
 scanf("%d",&x);
 scanf("%d",&y);
 func(&x,&y);
 printf("x = %d, y = %d", x, y);
 return 0;
}
