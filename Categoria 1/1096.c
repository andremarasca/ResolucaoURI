#include <stdio.h>
int main (void)
{
    int i=1,j=7,k=0;
    while(i<=9){
        printf("I=%d J=%d\n",i,j);
        j--;
        k++;
        if(k%3==0) i+=2,j=7;
    }
    return 0;
}