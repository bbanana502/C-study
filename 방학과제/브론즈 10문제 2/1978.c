#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num < 2)
            continue;

        int is_prime = 1;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) count++;
    }

    printf("%d\n", count);
    return 0;
}
