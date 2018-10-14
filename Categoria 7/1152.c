#include <stdio.h>
#include <stdlib.h>
#define infinito 2147483647
#define maxV 200000
static int ch[maxV];
static int sz[maxV];
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
typedef struct {
    int v, w;
    double cost;
} Edge;
void inicializagrafo(Vertices*g,int n);
void inserearesta(Vertices*v,int pai,int id,int peso);
int GRAPHmstK( Vertices *G,int tam,int arestas, Edge mst[]);
void GRAPHedges( Vertices *G,int tam, Edge e[]);
Edge EDGE( int v, int w, double cost);
void UFinit( int V);