#include <stdio.h>
int main (void)
{
    int a,b,c,d,comeco,fim;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    comeco=a*60+b;
    fim=c*60+d;
    comeco=fim-comeco;
    if(comeco<0) comeco = 1440 + comeco;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",comeco/60,comeco%60);
}