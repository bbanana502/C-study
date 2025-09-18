#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int alpha[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    scanf("%s",a);
    for (int i=0; i<strlen(a); i++)
    {
        int index = a[i] - 'a';
        if (alpha[index] == -1)
        alpha[index] = i;
    }
    for (int i=0; i<26; i++)
    {
        printf("%d",alpha[i]);
        if (i < 25)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}