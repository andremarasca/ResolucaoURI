#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct nodo
{
    char elemento[13];
    struct nodo*E;
    struct nodo*D;
};
struct abb
{
    struct nodo*raiz;
};
struct nodo* IN(char elemento[])
{
    struct nodo*novo=(struct nodo*)malloc(sizeof(struct nodo));
    strcpy(novo->elemento,elemento);
    novo->E=novo->D=NULL;
    return novo;
}
void inicializa(struct abb *n)
{
    n->raiz=NULL;
}
int main (void)
{
    struct abb arvore;
    inicializa(&arvore);