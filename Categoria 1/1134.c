#include <stdio.h>
int main (void)
{
    int i,x,c[3]={0};
    scanf("%d",&x);
    while(x!=4)
    {
        if(x==1) c[0]++;
        else if(x==2) c[1]++;
        else if(x==3) c[2]++;
        scanf("%d",&x);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",c[0]);
    printf("Gasolina: %d\n",c[1]);
    printf("Diesel: %d\n",c[2]);
    return 0;
}