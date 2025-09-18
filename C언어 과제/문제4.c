#include <stdio.h>

int main(void)
{
    int n[3][5] = {0};
    int num = 1;

    for (int d = 0; d <= 3 + 5 - 2; d++) // 대각선 인덱스: 0~6
    {
        for (int i = 0; i < 3; i++)       // 행
        {
            int j = d - i;                // 열
            if (j >= 0 && j < 5)          // 배열 범위 확인
            {
                n[i][j] = num++;
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}
