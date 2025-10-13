#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main(void)
{
    Node* head = NULL;
    Node* temp = NULL;
    Node* newNode = NULL;
    int num;
    printf("몇개의 노드를 입력하시겠습니까? : ");
    scanf("%d",&num);
    int n;
    
    for (int i=0; i<num; i++)
    {
        newNode = (Node*)malloc(sizeof(Node));
        if (newNode==NULL)
        {
            printf("에러");
            return 1;
        }


        printf("값을 넣어주세요 : ");
        scanf("%d",&newNode->data);
        if (head==NULL)
        {
            head = newNode;
        }
        else
        {
            temp->next = newNode;
        }

        temp = newNode;
    }
}

// 노드의 개수를 입력받고 연결리스트 생성, 
// 데이터 입력받아서 저장, 
//입력 받는 수의 위치에 존재하는 노드 삭제
// (1이면 첫번째 노드 삭제, 3이면 세번째 노드 삭제, 연결리스트 길이보다 큰 수라면 에러 출력)
// (어느 정도 할 수 있는 사람들은 1번과 2번을 합쳐서 
//     1 입력 시 첫번째 위치에 삽입, 
//     2 입력 시 삽입할 위치 다시 입력받고 그 위치에 삽입, 
//     3 입력시 마지막 위치에 삽입, 
//     4 입력 시 첫번째 노드 삭제, 
//     5 입력시 삭제할 위치 다시 입력받고 그 노드 삭제, 
//     6 입력시 마지막 노드 삭제)