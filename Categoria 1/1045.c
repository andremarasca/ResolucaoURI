#include <stdio.h>
void Bolha (float vet[], int tam)
{
    int i, j, t;
    for(i = tam; i > 0; i--)
    {
        for(j = 0 ; j < i - 1; j++)
        {
            if(vet[j] < vet[j + 1])
            {
                t = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = t;
            }
        }
    }
}
int main ()
{
    float x[3];
    scanf("%f %f %f", &x[0], &x[1], &x[2]);
    Bolha(x, 3);
    if(x[0] >= (x[1] + x[2]))
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if(x[0]*x[0] == (x[1]*x[1] + x[2]*x[2]))
            printf("TRIANGULO RETANGULO\n");
        else if(x[0]*x[0] > (x[1]*x[1] + x[2]*x[2]))
            printf("TRIANGULO OBTUSANGULO\n");
        else if(x[0]*x[0] < (x[1]*x[1] + x[2]*x[2]))