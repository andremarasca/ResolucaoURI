#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define infinito 2000000000
#define sim 1
#define nao 0
#define vazio -1
#define MAXV 1001
int grafo[MAXV][MAXV];
int dijkstra(int origem, int destino, int v)
{
    int i, minimo, atual;
    int pred[MAXV], passou[MAXV], custo[MAXV];
    for (i = 0; i < v; i++)
    {
        pred[i] = vazio;
        passou[i] = nao;
        custo[i] = infinito;
    }
    custo[origem] = 0;
    atual = origem;
    while (atual != destino)
    {
        for (i = 0; i < v; i++)
            if (grafo[atual][i] != vazio)
                if (custo[atual] + grafo[atual][i] < custo[i])
                {
                    custo[i] = custo[atual] + grafo[atual][i];
                    pred[i] = atual;
                }