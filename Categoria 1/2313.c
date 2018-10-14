#include <stdio.h>
#include <stdlib.h>     /* qsort, bsearch, NULL */
int compareints (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}
int main ()
{
    int x[3];
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    qsort (x, 3, sizeof (int), compareints);
    if(x[0] >= (x[1] + x[2]))
        printf("Invalido\n");
    else
    {
        if(x[0] == x[1] && x[1] == x[2])
            printf("Valido-Equilatero\n");
        else if(x[0] == x[1] || x[0] == x[2] || x[1] == x[2])
            printf("Valido-Isoceles\n");
        else
            printf("Valido-Escaleno\n");
        if(x[0]*x[0] == (x[1]*x[1] + x[2]*x[2]))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    return 0;
}