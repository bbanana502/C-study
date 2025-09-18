#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num[15];
    int n=15;
    int count = 0;
    int *even;
    even = (int*)malloc(sizeof(int) * n);
    for (int i=0; i<15; i++)
    {
        scanf("%d",&num[i]);
        if (num[i]=='\0') break;
        if (num[i]%2==0)
        {
            even[count] = num[i];
            count++;
            even = (int*)realloc(even, sizeof(int) * (count + 1));
        }
    }
    for (int i=0; i<count; i++)
    {
        printf("%d ",even[i]);
    }
}
// 3. 최대 15개의 정수를 입력받음. 이 중 짝수만 따로 저장한 배열을 malloc으로 생성하고, 크기를 realloc()으로 조정한 후 출력