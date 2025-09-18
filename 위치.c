#include<stdio.h>
int main(void)
{
    int num;
    int x = 0;
    int y = 0;
    char p;
    scanf("%d",&num);
    for (int i=0; i<num; i++)
    {
        scanf("%c",&p);
        if (p=="R")
        {
            if (x != num-1)
            {
                x++;
            }
        }
        if (p=="L")
        {
            if (x != 0)
            {
                x--;
            }
        }
        if (p=="U")
        {
            if (y != 0)
            {
                y--;
            }
        }
        if (p=="D")
        {
            if (y != num-1)
            {
                y++;
            }
        }
    }
    printf("%d %d",y+1 ,x+1);
}