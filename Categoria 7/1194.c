#include <stdio.h>
#include <stdlib.h>
int indice=0;
struct nodo
{
    int elemento;
    struct nodo*esquerda;
    struct nodo*direita;
};
struct abb
{
    struct nodo*raiz;
};
void inicializa(struct abb *n)
{
    n->raiz=NULL;
}
int insereabb (struct abb*n,int elemento)
{
    struct nodo*novo=(struct nodo*)malloc(sizeof(struct nodo));
    if(novo==NULL) return 1;
    novo->elemento=elemento;
    novo->esquerda=novo->direita=NULL;
    if(n->raiz==NULL) n->raiz=novo;
    else
    {
        struct nodo *pai,*atual=n->raiz;
        while(atual!=NULL)