#include <stdio.h>
int main (void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b<=a)
    {
        a=24-a;
        a=a+b;
        printf("O JOGO DUROU %d HORA(S)\n",a);
    }
    else printf("O JOGO DUROU %d HORA(S)\n",b-a);
    return 0;
}