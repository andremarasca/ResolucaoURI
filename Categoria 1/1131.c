#include <stdio.h>
int main (void)
{
    int i=0,j,x,y,a=0,b=0,c=0;
    do
    {
        scanf("%d %d",&x,&y);
        if(x>y) a++;
        else if(x<y) b++;
        else c++;
        do
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&j);
        }while(j!=1 && j!=2);
        i++;
    }while(j==1);
    printf("%d grenais\n",i);
    printf("Inter:%d\n",a);
    printf("Gremio:%d\n",b);
    printf("Empates:%d\n",c);
    if(a>b) printf("Inter venceu mais\n");
    else if(a<b) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}