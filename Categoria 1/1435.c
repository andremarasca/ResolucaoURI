#include <stdio.h>
int main (void)
{
    int i,j,x,k,a,b,c,d;
    scanf("%d",&x);
    while(x!=0)
    {
        int mat[x][x];
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                mat[i][j]=0;
            }
        }
        k=1;
        a=0;
        b=x-1;
        while(a<=b)
        {
            for(i=a;i<=b;i++) mat[i][a]=mat[a][i]=k;
            for(i=a;i<=b;i++) mat[i][b]=mat[b][i]=k;
            a++;
            b--;
            k++;
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)