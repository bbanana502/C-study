#include<stdio.h>
int main(void)
{
    int a;
    int b;
    int c;
    scanf("%d %d",&a,&b);
    if (a > b)
    {
        c = a;
    }
    else if (b > a)
    {
        c = b;
    }
    if (a==b)
    {
        c = a;
    }
    else
    {
        while(1)
        {
            if (b%c == 0 && a%c == 0)
            {
                break;
            }
            c--;
        }
    }
    printf("%d\n",c);
    return 0;
}