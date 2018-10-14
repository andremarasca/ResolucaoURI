#include <stdio.h>
int main (void)
{
    int i,j,n,x,y,soma;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y){
            soma=x;
            x=y;
            y=soma;
        }
        soma=0;
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0) soma+=j;
        }
        printf("%d\n",soma);
    }
    return 0;
}