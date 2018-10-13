#include <stdio.h>
int main (void)
{
    int x,y;
    float z;
    scanf("%d %d",&x,&y);
    z=x*y;
    z=z/12;
    printf("%.3f\n",z);
    return 0;
}