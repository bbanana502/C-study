#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char quiz[81];
    for (int i = 0; i < n; i++) {
        scanf("%s", quiz);

        int score = 0;
        int bonus = 0;
        for (int j = 0; quiz[j] != '\0'; j++) {
            if (quiz[j] == 'O') {
                bonus++;
                score += bonus;
            } else {
                bonus = 0;
            }
        }
        printf("%d\n", score);
    }
    return 0;
}
