#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int count = 0;
    char word[101];

    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        int used[26] = {0};
        int len = strlen(word);
        int is_group = 1;

        for (int j = 0; j < len; j++) {
            int idx = word[j] - 97;
            if (j > 0 && word[j] != word[j-1] && used[idx]) {
                is_group = 0;
                break;
            }
            used[idx] = 1;
        }

        if (is_group) count++;
    }

    printf("%d\n", count);
    return 0;
}
