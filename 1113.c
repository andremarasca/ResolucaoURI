#include <stdio.h>
int main (void){
    int a,b,i,soma;
    for(scanf("%d %d",&a,&b);a!=b;scanf("%d %d",&a,&b)){
        if(a>b){
            printf("Decrescente\n");
        }
        else printf("Crescente\n");
    }
}