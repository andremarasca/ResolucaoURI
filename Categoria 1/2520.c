#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int M, N, i, j, x, i0, j0, i1, j1;
    while(scanf("%d %d", &M, &N) != EOF){
        for(i = 0; i < M; i++){
            for(j = 0; j < N; j++){
                scanf("%d", &x);
                if(x == 2){
                    i0 = i;
                    j0 = j;
                }
                else if (x == 1){
                    i1 = i;
                    j1 = j;
                }
            }
        }
        printf("%d\n", abs(i1 - i0) + abs(j1 - j0));
    }
    return 0;
}