#include<stdio.h>
int main (void)
{
    int m, s;
    int plus;
    scanf("%d %d",&m ,&s);
    scanf("%d",&plus);
    s = s + plus;
    m = m + s/60;
    m = m%24;
    s = s%60;
    printf("%d %d\n",m,s);
    return 0;
}