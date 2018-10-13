#include <stdio.h>
double denominador(int i, int p)
{
    if(i >= p)
        return 6.0;
    return 6.0 + 1.0 / denominador(i + 1, p);
}
int main (void)
{
    int N, i;
    double raiz = 3;
    scanf("%d", &N);
    if(N > 0)
        raiz = 3 + 1 / denominador(1, N);
    printf("%.10lf\n", raiz);
    return 0;
}