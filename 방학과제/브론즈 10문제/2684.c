#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);
    char game[41];
    for (int i=0; i<num; i++)
    {
        scanf("%s",game);
        int result[8] = {0};
        for (int j=0; j<38; j++)
        {
            if (game[j] == 'T')
            {
                if (game[j+1] == 'T')
                {
                    if (game[j+2] == 'T')
                    {
                        result[0]++;
                    }
                    else
                    {
                        result[1]++;
                    }
                }
                else
                {
                    if (game[j+2] == 'T')
                    {
                        result[2]++;
                    }
                    else
                    {
                        result[3]++;
                    }
                }
            }
            else
            {
                if (game[j+1] == 'T')
                {
                    if (game[j+2] == 'T')
                    {
                        result[4]++;
                    }
                    else
                    {
                        result[5]++;
                    }
                }
                else
                {
                    if (game[j+2] == 'T')
                    {
                        result[6]++;
                    }
                    else
                    {
                        result[7]++;
                    }
                }
            }
        }
        printf("%d %d %d %d %d %d %d %d\n",result[0],result[1],result[2],result[3],result[4],result[5],result[6],result[7]);
    }
    
    return 0;
}