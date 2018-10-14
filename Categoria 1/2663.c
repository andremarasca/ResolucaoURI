#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort, bsearch, NULL */
int compareints (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}
int main (void)
{
    int N, K, i;
    scanf("%d %d", &N, &K);
    int v[N];
    for(i = 0; i < N; i++)
        scanf("%d", &v[i]);
    qsort (v, N, sizeof (int), compareints);
    K--;
    for(i = K; i < N && v[i] == v[K]; i++);
    printf("%d\n", i);
    return 0;
}