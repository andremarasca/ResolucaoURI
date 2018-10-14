#include <stdio.h>
int main (void) {
    int i,x;
        scanf("%d",&x);
        while(x != 0) {
                    for(i = 1; i <=x; i++) {
            printf("%d",i);
            if(i == x) printf("\n");
            else printf(" ");
        }
                scanf("%d",&x);
    }
    return 0;
}