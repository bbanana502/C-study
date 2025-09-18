#include<stdio.h>
#include<string.h>
int main(void)
{
    int num;
    char let[21];
    int n;
    int index = 0;
    scanf("%d",&num);
    for (int i=0; i<num; i++)
    {
        scanf("%d %s",&n ,&let);
        for (int j=0; strlen(let)>j; j++)
        {
            for (int s=0; s<n; s++)
            {
                printf("%c",let[index]);
            }
            index++;
        }
        printf("\n");
        index = 0;
    }
    printf("\n");
    return 0;
}