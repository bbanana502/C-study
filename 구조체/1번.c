#include<stdio.h>
#include<string.h>

struct phone{
    char name[100];
    char phone[15];
};

int main(void)
{
    int q;
    scanf("%d",&q);
    struct phone list[q];
    for (int i=0; i<q; i++)
    {
        printf("이름, 전화번호 입력 : ");
        scanf("%s %s",list[i].name,list[i].phone);
    }
    int n;
    scanf("%d",&n);
    char mname[100];
    int found = 0;
    for (int i=0; i<n; i++)
    {
        found = 0;
        scanf("%s",mname);
        for (int j=0; j<n; j++)
        {
            if (strcmp(mname, list[j].name)==0)
            {
                printf("%s\n",list[j].phone);
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("Not Found\n");
        }
    }
    //여기서 막혀요 문자열 string.h를 잘 못 쓰겠어요
    //완료
}