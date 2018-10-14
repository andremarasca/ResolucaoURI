#include <stdio.h>
int main (void)
{
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    a=a*2+b*3+c*4+d;
    a=a/10.0;
    printf("Media: %.1f\n",a);
    if(a>=7) printf("Aluno aprovado.\n");
    else if(a<5) printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&b);
        printf("Nota do exame: %.1f\n",b);
        a=(float)(a+b)/2;
        if(a>=5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",a);
    }
    return 0;
}