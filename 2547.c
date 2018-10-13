#include <stdio.h>
int main (void)
{
    int N, i, x, a, b, q;
    while(scanf("%d %d %d", &N, &a, &b) != EOF){
        for(i = 0, q = 0; i < N; i++){
            scanf("%d", &x);
            if(a <= x && x <= b)
                q++;
        }
        printf("%d\n", q);
    }
    return 0;
}