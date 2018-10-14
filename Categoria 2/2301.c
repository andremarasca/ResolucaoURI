#include <stdio.h>
typedef struct morto
{
    int inicio;
    int prox[100];
    int pess[100];
}vivo;
void play(vivo *x);
int buscaanterior(vivo *x,int elemento);
int apaga(vivo *x,int elemento);
int main (void)
{
    int P,R,N,i,j,ordem,reacao,posicao,cont=0;
    vivo x;
    while(scanf("%d %d",&P,&R)==2 && (P!=0 || R!=0))
    {
        play(&x);
        x.prox[P-1]=-1;
        for(i=0;i<P;i++)
        {
            scanf("%d",&x.pess[i]);
        }
        for(i=0;i<R;i++)
        {
            scanf("%d %d",&N,&ordem);
            posicao=x.inicio;
            for(j=0;j<N && posicao!=-1;j++)
            {
                scanf("%d",&reacao);
                if(reacao!=ordem) apaga(&x,x.pess[posicao]);