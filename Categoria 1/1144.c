#include <stdio.h>
int main (void) {
    int i,n,q,c;
    scanf("%d",&n);
    for(i = 1; i <= n; i++) {
        printf("%d %d %d\n",i,i*i,i*i*i);
        printf("%d %d %d\n",i,i*i+1,i*i*i+1);
    }
}