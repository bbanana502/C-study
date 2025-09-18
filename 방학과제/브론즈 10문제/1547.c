#include<stdio.h>
int main (void)
{
    int num;
    int a,b;
    int target = 1;
    scanf("%d",&num);
    for (int i=0; i<num; i++)
    {
        scanf("%d %d",&a ,&b);
        if (a==target)
        {
            target = b;
        }
        else if (b==target)
        {
            target = a;
        }
    }
    printf("%d\n",target);
    return 0;
}