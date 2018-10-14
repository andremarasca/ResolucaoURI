#include <stdio.h>
int main (void)
{
    int a,b,c;
    scanf("%d",&a);
    c=a/3600;
    a=a-c*3600;
    b=a/60;
    a=a-b*60;
    printf("%d:%d:%d\n",c,b,a);
    return 0;
}