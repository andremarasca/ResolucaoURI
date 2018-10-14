#include <stdio.h>
#include <stdlib.h>
#define infinito 2147483647
typedef struct aresta
{
    int id;
    int peso;
    struct aresta*proximo;
}aresta;
typedef struct vertices
{
    int dado;
    aresta*primeiro;
    aresta*ultimo;
}Vertices;
typedef struct fila_prioridade
{
    int id,distancia;
}fila_prioridade;
void inicializagrafo(Vertices*g,int n);
void inserearesta(Vertices*v,int pai,int id,int peso);
void inicializa_fila_prioridade(fila_prioridade*f,int tam);
void DIJKSTRA(Vertices *G,int tam,int s,int parent[],int dist[]);
void INSERIRFILAPRIORIDADE(fila_prioridade PQ[],int *fim,int u,int dist);
int RETORNAMENOR(fila_prioridade PQ[],int *fim);
void RELAXAMENTO(fila_prioridade PQ[],int *fim,int u,int dist);
void troca (fila_prioridade * a,fila_prioridade * b);
int main (void)