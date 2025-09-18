#include <stdio.h>

int main(void) {
    int n = 5;
    int a[5][5] = {0};
    int num = 1;

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) a[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++) a[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--) a[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--) a[i][left] = num++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%2d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
//전과 다른 방법을 사용하기 위해 AI에게 코칭을 조금 받음