#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result = a * b * c;
    int count[10] = {0};

    while (result > 0) {
        int digit = result % 10;
        count[digit]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
