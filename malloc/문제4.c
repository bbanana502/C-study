#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *s[10];
    int maxLen = 0, maxIdx = 0;

    for (int i = 0; i < 10; i++) {
        char buf[101];
        if (scanf("%100s", buf) != 1) break;

        int len = strlen(buf);
        s[i] = (char*)malloc(len + 1);
        strcpy(s[i], buf);

        if (len > maxLen) {
            maxLen = len;
            maxIdx = i;
        }
    }

    printf("%s\n", s[maxIdx]);
}

// 4. 최대 10개의 문자열을 입력받음. 각 문자열은 malloc()을 이용해 메모리를 동적으로 할당하고 저장. 입력된 문자열 중 가장 긴 문자열을 찾아 출력