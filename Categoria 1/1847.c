#include <stdio.h>
int main (void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
    {
        if(b <= c)
            printf(":)\n");
        else
        {
            if((a-b) > (b-c))
                printf(":)\n");
            else
                printf(":(\n");
        }
    }
    else if(a < b)
    {
        if(b >= c)
            printf(":(\n");
        else
        {
            if((b-a) > (c-b))
                printf(":(\n");
            else
                printf(":)\n");
        }
    }
    else
    {
        if(c > b)