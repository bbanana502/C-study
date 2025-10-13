#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    char data;
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
        scanf(" %c",&newNode->data);
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

    Node* p = head;

    for (int i=0; i<num; i++)
    {
        printf("%c",p->data);
        p = p->next;
    }
}
// 노드의 개수를 입력받고 연결리스트 생성
// 문자열을 입력받아서 저장, 
//전체 문자열 출력