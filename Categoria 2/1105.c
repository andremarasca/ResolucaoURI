#include <stdio.h>
int main(void)
{
    int i, B, N, Vb[20], D, C, V;
    while(scanf("%d %d", &B, &N) && (B || N))
    {
        for(i = 0; i < B; i++)
            scanf("%d", &Vb[i]);
        for(i = 0; i < N; i++){
            scanf("%d %d %d", &D, &C, &V);
            Vb[D - 1] -= V;
            Vb[C - 1] += V;
        }
        N = 0;
        for(i = 0; i < B && !N; i++) {
            if(Vb[i] < 0) N = 1;
        }
        if(!N) printf("S\n");
        else printf("N\n");
    }
    return 0;
}