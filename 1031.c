#include <stdio.h>
int josephus(int n, int k) {
  if (n == 1)
    return 1;
  else
    return (josephus(n - 1, k) + k-1) % n + 1;
}
int energia (int n, int k) {
    int solucao = josephus(n, k) - (k % n) + 1;
    if(solucao < 0) solucao = n + solucao;
    return solucao;
}
int main (void) {
    int i, n;
    scanf("%d", &n);
    while(n) {
        for(i = 0;energia(n,i) != 13; i++);
        printf("%d\n", i);
        scanf("%d", &n);
    }
    return 0;
}