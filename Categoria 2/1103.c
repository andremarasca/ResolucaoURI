#include <stdio.h>
int main (void) {
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    while(h1 != 0 || m1 != 0 || h2 !=0 || m2 != 0) {
        m1 = h1 * 60 + m1;
        m2 = h2 * 60 + m2;
        if(m1 < m2) m2 = m2 - m1;
        else m2 = 1440 - m1 + m2;
        printf("%d\n", m2);
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    }
    return 0;
}