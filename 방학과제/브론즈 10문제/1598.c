#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a, b;
    int ax, ay, bx, by;
    scanf("%d %d",&a ,&b);

    ax = (a-1)/4;
    bx = (b-1)/4;
    ay = (a-1)%4;
    by = (b-1)%4;

    int result = abs(ax - bx) + abs(ay - by);
    printf("%d\n",result);
    return 0;
}