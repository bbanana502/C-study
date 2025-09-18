#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    scanf("%s", str);

    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == 'c' && str[i+1] == '=')
            i++;
        else if (str[i] == 'c' && str[i+1] == '-')
            i++;
        else if (str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=')
            i += 2;
        else if (str[i] == 'd' && str[i+1] == '-')
            i++;
        else if (str[i] == 'l' && str[i+1] == 'j')
            i++;
        else if (str[i] == 'n' && str[i+1] == 'j')
            i++;
        else if (str[i] == 's' && str[i+1] == '=')
            i++;
        else if (str[i] == 'z' && str[i+1] == '=')
            i++;
        count++;
    }

    printf("%d\n", count);
    return 0;
}
