#include <stdio.h>
int main (void)
{
    int a,b,c;
    scanf("%d",&a);
    c=a/365;
    a=a-c*365;
    b=a/30;
    a=a-b*30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",c,b,a);
    return 0;
}