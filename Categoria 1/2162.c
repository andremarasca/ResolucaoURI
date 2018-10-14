#include <stdio.h>
#define pico 1
#define vale 0
int main (void)
{
    int N, i, e = -1, v[100], p = 1;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }
    if(N == 2){
        if(v[0] == v[1])
            printf("0\n");
        else
            printf("1\n");
    }
    else {
        for(i = 2; i < N && p; i++){
            if(v[i - 2] < v[i - 1] && v[i - 1] > v[i]){
                if(e == pico)
                    p = 0;
                else
                    e = pico;
            }
            else if(v[i - 2] > v[i - 1] && v[i - 1] < v[i]){
                if(e == vale)
                    p = 0;
                else
                    e = vale;
            }
            else
                p = 0;
        }