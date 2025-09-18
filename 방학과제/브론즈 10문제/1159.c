#include <stdio.h>

int main(void) {
    int n, count[26] = {0};
    char name[31];
    int ok = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        count[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] >= 5) {
            printf("%c", i + 'a');
            ok = 1;
        }
    }

    if (!ok) printf("PREDAJA");
    printf("\n");
    return 0;
}
