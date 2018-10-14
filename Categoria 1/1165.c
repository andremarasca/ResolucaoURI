#include <stdio.h>
#include <math.h>
int main (void)
{
    int i=1,ctrl=0,n,a,x;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d",&x);
        ctrl = 0;
        for(i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                ctrl=1;
                break;
            }
        }
        if(ctrl) printf("%d nao eh primo\n",x);
        else printf("%d eh primo\n",x);
    }
}