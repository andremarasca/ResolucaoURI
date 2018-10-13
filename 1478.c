#include <stdio.h>
int main (void)
{
    int i,j,x;
    scanf("%d",&x);
    while(x!=0)
    {
        int mat[x][x];
        for(i=0;i<x;i++)
        {
            for(j=i;j<x;j++)
            {
                mat[j][i]=mat[i][j]=j+1-i;
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                printf("%3d",mat[i][j]);
                if(j<x-1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&x);
    }
    return 0;
}