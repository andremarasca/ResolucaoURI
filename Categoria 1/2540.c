#include <stdio.h>
int main (void)
{
    int N, i, x, q;
    while(scanf("%d", &N) != EOF){
        for(i = 0, q = 0; i < N; i++){
            scanf("%d", &x);
            q += x;
        }
        if(q >= (N * 2 / 3.0))
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }
    return 0;
}