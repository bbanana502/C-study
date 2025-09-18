#include<stdio.h>
int main(void)
{
    int sum = 0;
    char str[101];
    fgets(str, sizeof(str), stdin);
    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i] == ',' || str[i] == '\n')
        {
            continue;
        }

        sum = sum + (int)str[i] - 48;
    }
    printf("%d",sum);
}