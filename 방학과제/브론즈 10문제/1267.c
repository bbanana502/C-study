#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);
    int n;
    int ycount = 0;
    int mcount = 0;
    int y=0, m=0;
    for (int i=0; i<num; i++)
    {
        scanf("%d",&n);
        y = (n/30 + 1) * 10 + y;
        m = (n/60 + 1) * 15 + m;
    }
    if (y==m)
    {
        printf("Y M %d",y);
    }
    else if (y < m)
    {
        printf("Y %d",y);
    }
    else
    {
        printf("M %d",m);
    }
    printf("\n");

    return 0;
}