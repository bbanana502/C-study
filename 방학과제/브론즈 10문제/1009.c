#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        a %= 10;
        int e = b % 4;
        if (e == 0) e = 4;
        int r = 1;
        for (int i = 0; i < e; i++) r = (r * a) % 10;
        if (r == 0) r = 10;
        printf("%d\n", r);
    }
    return 0;
}
