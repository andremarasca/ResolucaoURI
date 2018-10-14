#include <stdio.h>
int main (void){
    int a,b,i,soma;
    for(scanf("%d %d",&a,&b);a!=0 && b!=0;scanf("%d %d",&a,&b)){
        if(a>b){
            i=a;a=b;b=i;
        }
        soma=0;
        for(i=a;i<=b;i++){
                printf("%d ",i);
                soma+=i;
        }
        printf("Sum=%d\n",soma);
    }
}