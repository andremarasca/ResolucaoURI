#include <stdio.h>
int main (void)
{
    int N, i;
    char c;
    scanf("%d", &N);
    while(getchar() != EOF);
    for(i = 0; i < N; i++){
        printf("Y\n");
    }
    return 0;
}