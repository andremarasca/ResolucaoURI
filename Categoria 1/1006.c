#include <stdio.h>
int main (void)
{
    float A,B,C,MEDIA;
    scanf("%f %f %f",&A,&B,&C);
    MEDIA=(A*2+B*3+C*5)/10;
    printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}