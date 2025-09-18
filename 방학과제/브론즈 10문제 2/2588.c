#include<stdio.h>
int main(void)
{
    int a1, a2, a3, b1, b2, b3, av, bv;
    int v1, v2, v3, v4;
    scanf("%s",&a1);
    av = a1;
    scanf("%s",&b1);
    bv = b1;
    v4 = a1 * b1;
    a3 = a1%10;
    a2 = a1/10%10;
    b3 = b1%10;
    b2 = b1/10%10;
    v1 = av*b3;
    v2 = av*b2;
    v3 = av*b1;
    printf("%d\n%d\n%d\n%d\n",v1,v2,v3,v4);
    return 0;


}