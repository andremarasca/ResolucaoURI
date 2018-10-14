#include <stdio.h>
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    return (josephus(n - 1, k) + k-1) % n + 1;
}
int main (void) {
    int i, x, n, k, m;
    scanf("%d", &x);
    for(i = 1; i <= x; i++) {
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n", i, josephus(n, k));
    }
    return 0;
}