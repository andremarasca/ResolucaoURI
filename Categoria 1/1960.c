#include <stdio.h>
int main (void)
{
    int N;
    scanf("%d", &N);
    if(N == 1000)
        printf("M");
    else
    {
        if(N >= 900)
            printf("CM");
        else if(N >= 800)
            printf("DCCC");
        else if(N >= 700)
            printf("DCC");
        else if(N >= 600)
            printf("DC");
        else if(N >= 500)
            printf("D");
        else if(N >= 400)
            printf("CD");
        else if(N >= 300)
            printf("CCC");
        else if(N >= 200)
            printf("CC");
        else if(N >= 100)
            printf("C");
        N = N % 100;
        if(N >= 90)
            printf("XC");