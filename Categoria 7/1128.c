#include <stdio.h>
#include <stdlib.h>
#define infinito 2147483647
#define branco 123456
#define cinza 654321
#define preto 777777
int tempo=0,arvores=0;
typedef struct aresta
{
    int id;
    int peso;
    struct aresta*proximo;
}aresta;
typedef struct vertices
{
    int pai;
    int entrada;
    int saida;
    int cor;
    aresta*primeiro;
    aresta*ultimo;
}Vertices;
typedef struct fila_prioridade
{
    int id,distancia;
}fila_prioridade;
typedef struct ordem
{