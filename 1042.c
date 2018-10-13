#include <stdio.h>
#include <stdlib.h>
#define QUANT 3
struct nodo
{
    int elemento;
    int balanceamento;
    struct nodo *pai;
    struct nodo *esquerda;
    struct nodo *direita;
};
struct AVL
{
    struct nodo* raiz;
};
void inicializa(struct AVL *pai);
void insere(struct AVL *pai,int elemento);
struct nodo *insereAVL(struct nodo *no,int elemento,int *chave);
struct nodo *simplesesquerda(struct nodo *no);
struct nodo *simplesdireita(struct nodo *no);
struct nodo *duplaesquerdadireita(struct nodo *no);
struct nodo *dupladireitaesquerda(struct nodo *no);
void em_ordem(struct nodo *no);
int main (void)
{
    struct AVL arvore;
    inicializa(&arvore);
    int i,n;