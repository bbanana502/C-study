#include<stdio.h>
#include<time.h>

int main(void)
{
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    int num;
    scanf("%d",&num);
    int base[num];
    for (int i=0; i<num; i++)
    {
        scanf("%d",&base[i]);
    }
    scanf("%d",&num);
    int target;
    int truth=0;
    for (int i=0; i<num; i++)
    {
        scanf("%d",&target);
        for (int j=0; j<num; j++)
        {
            if (base[j] == target)
            {
                printf("1");
                truth=1;
                break;
            }
        }
        if (truth==0)
        {
            printf("0");
        }
        truth=0;
        printf("\n");
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("실행 시간: %f 초\n", cpu_time_used);
    return 0;
}