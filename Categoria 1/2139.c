#include <stdio.h>
int main (void)
{
    int DPM[] = {0,31,60,91,121,152,182,213,244,274,305,335};
    int M, D, T, TN = 360;
    while(scanf("%d %d", &M, &D) != EOF)
    {
        T = DPM[M - 1] + D;
        T = TN - T;
        if(T == 0)
            printf("E natal!\n");
        else if(T == 1)
            printf("E vespera de natal!\n");
        else if(T < 0)
            printf("Ja passou!\n");
        else
            printf("Faltam %d dias para o natal!\n", T);
    }
    return 0;
}