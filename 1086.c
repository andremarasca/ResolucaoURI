#include <stdio.h>
#include <stdlib.h>
 #define maxAltura 10000
 int minimo (int x, int y) {
    if (x < y) return x;
    else return y;
}
 int quantoUsar (int q, int M, int L) {
    // M eh quanto cabem em metros
    // q eh quantas unidades eu tenho
    // L eh a largura de cada unidade em centimetros
    if (q < M/L) return q;
    else return M/L;
}
 int tentaPreencher (int *v, int n, int M, int N, int L) {
    int tabuas = 0;
    int i = N/100, j, q;
         // Tenho v[i-1] tabuas de N metros de altura
    q = quantoUsar (v[i-1], M, L); // Quantos centimetros serao usados
    M -= q*L;
    tabuas += q;
     i--;
    j = N/100-i;
     while (i > j && M > 0) {
        q = quantoUsar (minimo (v[i-1], v[j-1]), M, L); // Quantos centimetros serao usados
        M -= q*L;