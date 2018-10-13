#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort, bsearch, NULL */
int M;
int compareints (const void * a, const void * b)
{
    int A = *(int*)a, B = *(int*)b;
    int ma = A % M;
    int mb = B % M;
    if(ma < mb)
        return -1;
    else if(ma > mb)
        return 1;
    else
    {
        if(A % 2 == 0)
        {
            if(B % 2 != 0)
                return 1;
            if(A < B)
                return -1;
            else
                return 1;
        }
        else
        {
            if(B % 2 == 0)
                return -1;
            if(A < B)
                return 1;
            else
                return -1;