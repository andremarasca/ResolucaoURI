#include <stdio.h>
#include <stdlib.h>
typedef struct nodo
{
    int elemento;
    struct nodo *proximo;
} Nodo;
typedef struct fila
{
    Nodo *primeiro;
    Nodo *ultimo;
} Fila;
void inicializa (Fila *f)
{
    f->primeiro=NULL;
    f->ultimo=NULL;
}
void enfila (Fila *f, int elemento)
{
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    novo->elemento = elemento;
    novo->proximo = NULL;
    if(f->primeiro == NULL)
    {
        f->primeiro = novo;
        f->ultimo = novo;
    }
    else
    {