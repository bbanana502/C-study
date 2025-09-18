#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int d[1000001] = {0};

    for (int i = 2; i <= n; i++) {
        d[i] = d[i - 1] + 1;
        if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
            d[i] = d[i / 2] + 1;
        }
        if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
            d[i] = d[i / 3] + 1;
        }
    }

    printf("%d\n", d[n]);
    return 0;
}
