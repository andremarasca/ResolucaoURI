#include <stdio.h>
int main (void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==1) printf("Total: R$ %.2f\n",(float)b*4);
    else if(a==2) printf("Total: R$ %.2f\n",(float)b*4.5);
    else if(a==3) printf("Total: R$ %.2f\n",(float)b*5);
    else if(a==4) printf("Total: R$ %.2f\n",(float)b*2);
    else if(a==5) printf("Total: R$ %.2f\n",(float)b*1.5);
    return 0;
}