#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct bau Bau;
struct bau
{
    int original;
    int qtd;
};
void imprimir (Bau v[], int N);
int crescente(Bau A, Bau B);
int decrescente(Bau A, Bau B);
void Merge (Bau vet[],int inicio,int meio,int fim, int (*meu_decisor)(Bau A, Bau B));
void MergeSort (Bau vet[],int inicio,int fim, int (*meu_decisor)(Bau A, Bau B));
int main (void)
{
    Bau v[128];
    char palavra[1001];
    int i, tmp = 0;
    while(scanf(" %[^\n]s", palavra) != EOF)
    {
        if(tmp) printf("\n");
        tmp = 1;
        for(i = 32; i < 128; i++)
        {
            v[i].original = i;
            v[i].qtd = 0;
        }
        for(i = 0; palavra[i] != '\0'; i++)