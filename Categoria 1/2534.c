#include <stdio.h>
#include <stdlib.h>
int compareints (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}
int main (void)
{
    int N, i, x, Q, v[100];
    while(scanf("%d %d", &N, &Q) != EOF)
    {
        for(i = 0; i < N; i++){
            scanf("%d", &v[i]);
        }
        qsort (v, N, sizeof (int), compareints);
        for(i = 0; i < Q; i++){
            scanf("%d", &x);
            printf("%d\n", v[x-1]);
        }
    }
    return 0;
}