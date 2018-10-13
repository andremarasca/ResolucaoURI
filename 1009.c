#include <stdio.h>
int main (void)
{
    float nome[50];
    float A,B;
    scanf("%s %f %f",nome,&A,&B);
    printf("TOTAL = R$ %.2f\n",A+0.15*B);
    return 0;
}