#include <stdio.h>
#include <math.h>
int main ()
{
    int i, k, n;
    scanf("%d",&n);
    while(n)
    {
        k = sqrt(n);
        for(i = 1; i <= k; i++)
        {
            printf("%d",i*i);
            if(i < k) printf(" ");
            else printf("\n");
        }
        scanf("%d",&n);
    }
    return 0;
}