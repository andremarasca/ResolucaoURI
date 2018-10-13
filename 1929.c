#include <stdio.h>
#include <stdlib.h>
int compareints (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}
int main (void)
{
    int v[4], f = 0, i;
    for (i = 0; i < 4; i++)
        scanf("%d", &v[i]);
    qsort (v, 4, sizeof (int), compareints);
    if(v[0] < v[1] + v[2])
        f = 1;
    else if(v[0] < v[1] + v[3])
        f = 1;
    else if(v[0] < v[2] + v[3])
        f = 1;
    else if(v[1] < v[2] + v[3])
        f = 1;
    if(f)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}