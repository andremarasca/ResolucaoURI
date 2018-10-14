#include <stdio.h>
int main (void)
{
    int N, i, B, A1, D1, L1, A2, D2, L2;
    double VG1, VG2;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &B);
        scanf("%d %d %d", &A1, &D1, &L1);
        scanf("%d %d %d", &A2, &D2, &L2);
        VG1 = (A1 + D1) / 2 + B * !(L1 % 2);
        VG2 = (A2 + D2) / 2 + B * !(L2 % 2);
        if(VG1 > VG2)
            printf("Dabriel\n");
        else if(VG1 < VG2)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }
    return 0;
}