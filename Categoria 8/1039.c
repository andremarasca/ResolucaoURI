#include <stdio.h>
#include <math.h>
int main(void)
{
    int r1,x1,y1,r2,x2,y2;
    float distancia;
    while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2)!=EOF)
    {
        distancia= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        if((distancia+r2)<=r1) printf("RICO\n");
        else printf("MORTO\n");
    }
    return 0;
}