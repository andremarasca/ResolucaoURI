#include <cstdio>
#include <cstring>
using namespace std;
const int INF = 0x3f3f3f3f;
// Quantidade máxima de vertices
const int MAXV = 501;
// Matriz de adjacência
int grafo[MAXV][MAXV];
int dijkstra(int origem, int destino, int v)
{
    int i,minimo,atual;
    int custo[MAXV];
    bool passou[MAXV];
    for(i=0;i<v;i++)
    {
        passou[i] = false;
        custo[i] = INF;
    }
    custo[origem] = 0;
    atual = origem;
    while(atual != destino)
    {
        for (i=0; i<v; i++)
            if (grafo[atual][i] != -1)
                if (custo[atual] + grafo[atual][i] < custo[i])
                    custo[i] = custo[atual] + grafo[atual][i];
        minimo = INF + 1;