#include <stdio.h>
int main (void)
{
    int N, i, j, u, v, q;
    int mat[101][101];
    scanf("%d", &N);
    for(i = 0; i <= N; i++){
        for(j = 0; j <= N; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            q = 0;
            for(u = 0; u < 2; u++){
                for(v = 0; v < 2; v++){
                    q += mat[i + u][j + v];
                }
            }
            if(q > 1)
                printf("S");
            else
                printf("U");
        }
        printf("\n");
    }
    return 0;
}