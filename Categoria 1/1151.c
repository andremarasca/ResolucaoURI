#include <stdio.h>
int main (void)
{
    int A=0,B=1,C,i,n=5;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d", A);
        if(i!=n-1) {
            printf(" ");
        }
        else {
            printf("\n");
        }
        C = A + B;
        A=B;
        B=C;
    }
}