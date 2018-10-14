#include <stdio.h>
#include <stdlib.h>
typedef struct nodo Nodo;
struct nodo
{
    int elemento;
    Nodo *proximo;
};
typedef struct pilha Pilha;
struct pilha
{
    Nodo *topo;
    int qtd;
};
Pilha *NewPilha(void)
{
    Pilha *p = (Pilha *) malloc (sizeof(Pilha));
    p->topo = NULL;
    p->qtd = 0;
    return p;
}
int empilha(Pilha *p, int elemento)
{
    Nodo *novo = (Nodo *) malloc (sizeof(Nodo));
    if(novo == NULL)
        return 0;
    novo->elemento = elemento;