#include <stdio.h>
#include <math.h>
int numDigits(int number)
{
    int digits = 0;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}
int main (void)
{
    int A, i, j, d;
    char frase[20];
    scanf("%d", &A);
    while(A)
    {
        d = numDigits(pow(2,2 * (A - 1)));
        sprintf(frase, "%%%dd",d);
        for (i = 0; i < A; i++)
        {
            for (j = 0; j < A; j++)
            {
                printf(frase,(int) pow(2, i + j));
                if(j < A - 1)
                    printf(" ");
            }
            printf("\n");
        }