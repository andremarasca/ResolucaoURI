#include <stdio.h>
int sinal (int ant, int atual)
{
    if(atual == 1 || atual == -1)
        return 0;
    else if(ant == 1)
        return -1;
    else
        return 1;
}
int main (void)
{
    int a, n, nn, i, j, pi, pj, cdois, ii, jj, iia, jja, tmp, cn, ncn;
    scanf("%d", &n);
    while(n)
    {
        nn = n*n;
        cdois = 0;
        cn = 0;
        ncn = 2;
        ii = 0;
        jj = -1;
        iia = -1;
        jja = 0;
        for(a = 0; a < nn; a++)
        {
            if(a == 0)
                pi = pj = n/2;
            else if(a == 1)
                pj++;
            else if(a == 2)