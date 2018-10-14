#include <stdio.h>
int main (void) {
    int i, n, x0, y0, x1, y1;
    scanf("%d", &n);
    while(n) {
        scanf("%d %d", &x0, &y0);
        for(i = 0; i < n; i++) {
            scanf("%d %d", &x1, &y1);
            x1 -= x0;
            y1 -= y0;
            if(x1 == 0 || y1 == 0) printf("divisa\n");
            else if (x1 > 0 && y1 > 0) printf("NE\n");
            else if (x1 < 0 && y1 > 0) printf("NO\n");
            else if (x1 < 0 && y1 < 0) printf("SO\n");
            else if (x1 > 0 && y1 < 0) printf("SE\n");
        }
        scanf("%d", &n);
    }
    return 0;
}