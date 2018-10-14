#include <stdio.h>
int main (void)
{
    double V, D;
    double A, H;
    while(scanf("%lf %lf", &V, &D) != EOF){
        A = 3.14 * D * D / 4.0;
        H = V / A - 0.00001;
        printf("ALTURA = %.2lf\n", H);
        printf("AREA = %.2lf\n", A);
    }
    return 0;
}