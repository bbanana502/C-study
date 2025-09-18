#include<stdio.h>
int main (void)
{
    int num;
    int n;
    int max = -9999999;
    int min = 9999999;
    scanf("%d",&num);
    for (int i=0; i<num; i++)
    {
        scanf("%d",&n);
        if (n > max)
        {
            max = n;
        }
        if (n < min)
        {
            min = n;
        }
    }
    printf("%d %d\n",min,max);
    return 0;
}