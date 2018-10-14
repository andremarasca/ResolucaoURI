#include <stdio.h>
int main (void)
{
    int d1,d2,h1,h2,m1,m2,s1,s2;
    char teste[4];
    scanf("%s %d",teste,&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%s %d",teste,&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    d1 = d1 * 86400 + h1 * 3600 + m1 *60 + s1;
    d2 = d2 * 86400 + h2 * 3600 + m2 *60 + s2;
    d1 = d2 - d1;
    printf("%d dia(s)\n",d1/86400);
    d1=d1%86400;
    printf("%d hora(s)\n",d1/3600);
    d1=d1%3600;
    printf("%d minuto(s)\n",d1/60);
    d1=d1%60;
    printf("%d segundo(s)\n",d1);
    return 0;
}