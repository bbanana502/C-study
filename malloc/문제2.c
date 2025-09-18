#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int *arr;
    arr= (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int *result;
    int count = 0;
    result= (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        int twice = 0;
        for (int j = 0; j < count; j++) {
            if (arr[i] == result[j]) {
                twice = 1;
                break;
            }
        }
        if (!twice) {
            result[count] = arr[i];
            count++;
            result = (int*)realloc(result, sizeof(int) * (count + 1));
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",result[i]);
    }
}
// 2. 정수 n을 입력받고, n개의 정수를 입력받아서 저장. 중복된 값을 제거한 새 배열을 동적 생성하고 결과 출력(malloc, realloc 사용)