#include <stdio.h>
#include <stdlib.h>
typedef struct bau Bau;
struct bau
{
    int Npessoas;
    int valor;
};
void imprimir (Bau v[], int N)
{
    int i;
    for (i = 0; i < N - 1; i++)
    {
        if(v[i].valor == v[i+1].valor)
        {
            v[i+1].Npessoas += v[i].Npessoas;
            v[i].Npessoas = -1;
        }
    }
    for (i = 0; i < N; i++)
    {
        if(v[i].Npessoas >= 0)
        {
            printf("%d-%d", v[i].Npessoas, v[i].valor);
            if(i < N - 1)
                printf(" ");
            else
                printf("\n");