#include<stdio.h>
int main(void)
{
    int num;
    int outlet;
    int sum = 0;
    scanf("%d",&num);
    for (int i=0; i<num; i++)
    {
        scanf("%d",&outlet);
        sum = sum + outlet;
    }
    sum = sum + 1 - num;
    printf("%d\n",sum);
    return 0;
}