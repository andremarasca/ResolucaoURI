/* bsearch example */
#include <stdio.h>      /* printf */
#include <stdlib.h> /* qsort, bsearch, NULL */
#include <string.h>
typedef struct bau Bau;
struct bau
{
    char nome[101];
    int P, I;
    float A;
};
int comparador (const void * a, const void * b)
{
    Bau *A = (Bau *)a;
    Bau *B = (Bau *)b;
    if (A->P > B->P)
        return -1;
    else if (A->P < B->P)
        return 1;
    else
    {
        if (A->I < B->I)
            return -1;
        else if (A->I > B->I)
            return 1;
        else
        {
            if (A->A < B->A)
                return -1;
            else if (A->A > B->A)