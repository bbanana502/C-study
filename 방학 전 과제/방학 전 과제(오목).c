#include<stdio.h>
#define MAX 16

int main(void)
{
    int arr[MAX][MAX] = {0};
    for (int i=1; i<MAX; i++)
    {
        arr[0][i]=i;
        arr[i][0]=1;
    }
    for (int i=0; i<MAX; i++)
    {
        for (int j=0; j<MAX; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    while(1){
        int x, y;
        int winner;
        while(1){
        printf("백차례 어디에 착수 하시겠습니까? ex)x y ");
        scanf("%d%d",&y,&x);
        if (arr[x][y]!=0){
            printf("잘못된 선택입니다.\n");
        }
        if (arr[x][y]==0){
            break;
        }
        }
        arr[x][y] = 1;
        for (int i=0; i<MAX; i++)
            {
                for (int j=0; j<MAX; j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
        for (int i=1;i<=MAX;i++){
            for (int j=1;j<=MAX;j++){
                if(arr[i][j]==1 && arr[i+1][j]==1 && arr[i+2][j]==1 && arr[i+3][j]==1 && arr[i+4][j]==1){
                    printf("경기 종료!, 백이 승리하였습니다.\n");
                    winner=1;
                    break;
                }//세로 경기종료
                if(arr[i][j]==1 && arr[i][j+1]==1 && arr[i][j+2]==1 && arr[i][j+3]==1 && arr[i][j+4]==1){
                    printf("경기 종료!, 백이 승리하였습니다.\n");
                    winner=1;
                    break;
                }//가로 경기종료
                if(arr[i][j]==1 && arr[i+1][j+1]==1 && arr[i+2][j+2]==1 && arr[i+3][j+3]==1 && arr[i+4][j+4]==1){
                    printf("경기 종료!, 백이 승리하였습니다.\n");
                    winner=1;
                    break;
                }//오른쪽아래대각선 경기종료
                if(arr[i][j]==1 && arr[i-1][j+1]==1 && arr[i-2][j+2]==1 && arr[i-3][j+3]==1 && arr[i-4][j+4]==1){
                    printf("경기 종료!, 흑이 승리하였습니다.\n");
                    winner=1;
                    break;
                }//왼쪽아래대각선 경기종료
            }
        }
        if (winner == 1){
            for (int i=0; i<MAX; i++)
            {
                for (int j=0; j<MAX; j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            break;
        }//백
        
        while(1){
        printf("흑차례 어디에 착수 하시겠습니까? ex)x y ");
        scanf("%d%d",&y,&x);
        if (arr[x][y]!=0){
            printf("잘못된 선택입니다.\n");
        }
        if (arr[x][y]==0){
            break;
        }
        }
        arr[x][y] = 2;
        for (int i=0; i<MAX; i++)
            {
                for (int j=0; j<MAX; j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
        for (int i=1;i<MAX;i++){
            for (int j=1;j<MAX;j++){
                if(arr[i][j]==2 && arr[i+1][j]==2 && arr[i+2][j]==2 && arr[i+3][j]==2 && arr[i+4][j]==2){
                    printf("경기 종료!, 흑이 승리하였습니다.\n");
                    winner=2;
                    break;
                }//세로 경기종료
                if(arr[i][j]==2 && arr[i][j+1]==2 && arr[i+1][j+2]==2 && arr[i+1][j+3]==2 && arr[i+1][j+4]==2){
                    printf("경기 종료!, 흑이 승리하였습니다.\n");
                    winner=2;
                    break;
                }//가로 경기종료
                if(arr[i][j]==2 && arr[i+1][j+1]==2 && arr[i+2][j+2]==2 && arr[i+3][j+3]==2 && arr[i+4][j+4]==2){
                    printf("경기 종료!, 흑이 승리하였습니다.\n");
                    winner=2;
                    break;
                }//오른쪽아래대각선 경기종료
                if(arr[i][j]==2 && arr[i-1][j+1]==2 && arr[i-2][j+2]==2 && arr[i-3][j+3]==2 && arr[i-4][j+4]==2){
                    printf("경기 종료!, 흑이 승리하였습니다.\n");
                    winner=2;
                    break;
                }//왼쪽아래대각선 경기종료
            }
        }
        if (winner == 2){
            for (int i=0; i<MAX; i++)
            {
                for (int j=0; j<MAX; j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            break;
        }//흑
    }
    return 0;
    //0=빈칸,1=흰돌,2=검은돌
}