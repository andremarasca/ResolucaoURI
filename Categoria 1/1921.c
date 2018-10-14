#include <stdio.h>
int main (void)
{
    long long int n;
    scanf("%lli", &n);
    printf("%lli\n", n*(n-3)/2);
    return 0;
}