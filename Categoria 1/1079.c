#include <stdio.h>
int main(void)
{
    int i,n;
    float a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        printf("%.1f\n",(2*a+3*b+5*c)/10.0);
    }
}