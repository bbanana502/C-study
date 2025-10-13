#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void front(int num);
void center(int num, int n);

Node* head = NULL;
Node* temp = NULL;
Node* newNode = NULL;
int num;

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

    int feat = 0;
    int value = 0;
    printf("어떤 기능을 수행하시겠습니까?  (1: 제일 처음에 삽입  2: 정가운데에 삽입) : ");
    scanf("%d",&feat);
    printf("삽입하고 싶은 값을 입력해주세요 : ");
    scanf("%d",&value);
    if (feat == 1)
    {
        front(value);
    }
    else if (feat == 2)
    {
        center(value, num);
    }
    printf("결과 출력 : ");
    for (Node* i=head; i!=NULL; i=i->next)
    {
        printf("%d ",i->data);
    }
    return 0;
}

void front(int num){
    Node* NEW;
    NEW = (Node*)malloc(sizeof(Node));
    if (NEW == NULL)
    {
        printf("에러");
        return;
    }
    NEW->data = num;
    NEW->next = head;
    head = NEW;
}

void center(int num, int n)
{
    Node* NEW;
    NEW = (Node*)malloc(sizeof(Node));
    if (NEW == NULL)
    {
        printf("에러");
        return;
    }
    NEW->data = num;
    Node* temp = head;
    for (int i=0; i<(n/2)-1; i++)
    {
        temp = temp->next;
    }
    NEW->next = temp->next;
    temp->next = NEW;
}

// 노드의 개수를 입력받고 연결리스트 생성, 데이터 입력받아서 저장
// 1을 입력받으면 제일 처음에 삽입, 2를 입력받으면 연결리스트의 정가운데 삽입