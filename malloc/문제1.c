#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int *arr;
    arr= (int*)malloc(sizeof(int) * n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d",sum);
}
// 1. 정수 n을 입력받고, n개의 정수를 입력받아 합계 출력(malloc 사용)