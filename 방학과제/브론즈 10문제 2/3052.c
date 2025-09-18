#include<stdio.h>
int main(void)
{
    int count = 0;
    int num[42] = {0};
    int n;
    for (int i=0; i<10; i++)
    {
        scanf("%d",&n);
        n = n%42;
        num[n]++;
    }
    for (int i=0; i<42; i++)
    {
        if (num[i] > 0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}