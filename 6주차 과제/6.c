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

    Node* p = head;
    for (int i=0; i<num; i++)
    {
        array[i] = p->data;
        p = p->next;
        count++;
    }
    Node* J = head;
    for (int i=num-1; i>=0; i--)
    {
        J->data = array[i];
        J = J->next;
    }
    Node* q = head;
    for (int i=0; i<num; i++)
    {
        printf("%d",q->data);
        q = q->next;
    }
}
// //  노드의 개수를 입력받고 연결리스트 생성, 
// 데이터 입력받아서 저장, 
// 역순으로 연결리스트를 변환하고 데이터 출력