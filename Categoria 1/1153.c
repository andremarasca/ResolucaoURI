#include <stdio.h>
int main (void) {
    int fat=1,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
           fat=fat*i;
    }
    printf("%d\n",fat);
}