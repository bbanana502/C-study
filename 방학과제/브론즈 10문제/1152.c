#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001];
    if (!fgets(str, sizeof(str), stdin)) return 0;

    str[strcspn(str, "\n")] = '\0';

    int count = 0;
    int i = 0;

    while (str[i] == ' ') i++;

    if (str[i] == '\0') {
        printf("0\n");
        return 0;
    }

    count = 1;
    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != '\0' && str[i+1] != ' ') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
