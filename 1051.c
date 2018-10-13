#include <stdio.h>
float reajuste(float x,int y)
{
    float reajust = (x*y)/100;
    return reajust;
}
int main (void)
{
    float x,y=0;
    scanf("%f",&x);
    if(x<=2000) printf("Isento\n");
    else
    {
        x-=2000;
        if(x<=1000) y=reajuste(x,8);
        else if(x<=2500)
        {
                y = reajuste(1000,8);
                y += reajuste(x-1000,18);
        }
        else
        {
            y = reajuste(1000,8);
            y += reajuste(1500,18);
            y += reajuste(x-2500,28);
        }
        printf("R$ %.2f\n",y);
    }
    return 0;
}