#include<stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d",&a,&b);
    while(1)
    {
        if (a==b)
        {
            break;
        }
        if (a>b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    printf("%d\n",a);
    return 0;
}