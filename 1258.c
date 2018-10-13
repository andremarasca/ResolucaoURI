#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct bau Bau;
struct bau
{
    char nome[1000];
    char cor[100];
    char T, codT, codcor;
};
int decrescente(Bau A, Bau B)
{
    if (strcmp(A.nome, B.nome) <= 0)
        return 1;
    return 0;
}
int decrescenteT(Bau A, Bau B)
{
    if (A.codT <= B.codT)
        return 1;
    return 0;
}
int decrescentecor(Bau A, Bau B)
{
    if (A.codcor <= B.codcor)
        return 1;
    return 0;
}