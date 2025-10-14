#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL;
Node* temp = NULL;
Node* newNode = NULL;
int num;
int count = 0;

int main(void)
{
    
    printf("몇개의 노드를 입력하시겠습니까? : ");
    scanf("%d",&num);
    
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
    int* array = (int*)malloc(sizeof(int) * num);

    for (int i=0; i<num; i++)
    {
        array[i] = head->data;
        head = head->next;
        count++;
    }
    printf("결과 출력 : ");
    for (int i=num-1; i>=0; i--)
    {
        printf("%d ",array[i]);
    }
}
//노드의 개수를 입력받고 연결리스트 생성, 
// 데이터 입력받아서 저장, 
//저장된 데이터 역순으로 출력 (할 수 있는 사람은 재귀함수로)