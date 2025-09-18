#include<stdio.h>
struct Teacher{
    char name[100];
    int korean;
    int math;
    int english;
};

int main(void)
{
    int q;
    scanf("%d",&q);
    struct Teacher list[q];
    for (int i=0; i<q; i++)
    {
        scanf("%s %d %d %d", list[i].name, &list[i].korean, &list[i].math, &list[i].english);
    }

    //정렬을 해야 하는데 정렬법을 모르겠어요 ㅜ
}