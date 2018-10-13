#include <stdio.h>
int fx[4] = {-1, 0, 1, 0};
int fy[4] = {0, 1, 0, -1};
int main(void)
{
    int i, j, N, M, S;
    int dir,fig, x, y, nx, ny;
    char mapa[100][100], inst;
    scanf("%d %d %d", &N, &M, &S);
    while(N != 0 || M != 0 || S!= 0)
    {
        fig = 0;
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                scanf(" %c", &mapa[i][j]);
                if(mapa[i][j] >= 'A' && mapa[i][j] <= 'Z')
                {
                    x = i;
                    y = j;
                    if(mapa[x][y] == 'N') dir = 0;
                    else if(mapa[x][y] == 'L') dir = 1;
                    else if(mapa[x][y] == 'S') dir = 2;
                    else if(mapa[x][y] == 'O')  dir = 3;
                }
            }
        }
        for(i = 0; i < S; i++)
        {