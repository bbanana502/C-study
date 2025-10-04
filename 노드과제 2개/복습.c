#include <stdio.h>
#include<stdlib.h>

int num;
int pre;

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* first(Node* head);
Node* last(Node* head);
Node* middle(Node* head);

int main(void)
{
    Node one, two, three, four;
    Node* head = (Node*)malloc(sizeof(Node));
    head = &one;

    num = 10;
    one.data = num;
    one.next = &two;

    num = 20;
    two.data = num;
    two.next = &three;

    num = 30;
    three.data = num;
    three.next = &four;

    num = 40;
    four.data = num;
    four.next = NULL;

    int feat = 0;
    while(1)
    {
        printf("어떤 기능을 사용하시겠습니까??\n1. 출력  2. 삽입  3. 종료 : ");
    scanf("%d",&feat);
    if (feat == 1)//출력
    {
        while(1)
        {
            if (head->next==NULL)
            {
                break;
            }
            printf("%d ",head->data);
            head = head->next;
        }
        printf("\n");
    }
    else if (feat==2)//삽입
    {
        printf("어느 위치에 삽입하시겠습니까??\n1. 맨 앞  2. 맨 뒤  3. 중간 : ");
        scanf("%d",&feat);
        if (feat==1)
        {
            first(head);
        }
        else if (feat==2)
        {
            last(head);
        }
        else if (feat==3)
        {
            middle(head);
        }
        else
        {
            printf("잘못된 선택입니다.");
            printf("\n");
        }
        
    }
    else if (feat==3)
    {
        printf("프로그램을 종료합니다.");
        break;
    }
    else{
        printf("잘못된 선택입니다.");
        printf("\n");
    }
    }
}

Node* first(Node* head)
{
    printf("저장 하고 싶은 값 입력 : ");
    scanf("%d",&num);
    Node* new = (Node*)malloc(sizeof(Node));
    new -> next = head -> next;
    new -> data = num;
    head = new;

    printf("\n");
    return head;
}

Node* last(Node* head)//pre값을 어케 구함 -> 맨 마지막 노드를 뜻함
{
    printf("저장 하고 싶은 값 입력 : ");
    scanf("%d",&num);
    Node* new = (Node*)malloc(sizeof(Node));
    Node* p = head;
    while(1)
    {
        if (p->next==NULL)
        {
            break;
        }
        p = p->next;
    }
    new -> data = num;
    p -> next = new;
    new -> next = NULL;

    printf("\n");
    return head;
}

Node* middle(Node* head)//pre는 앞에것을 뜻함삽입 자리 
{
    printf("저장 하고 싶은 값 입력 : ");
    scanf("%d",&num);
    Node* new = (Node*)malloc(sizeof(Node));
    int front;
    int back;
    Node* p = head;
    front = 0;
    while(1)
    {
        
        back = p->data;
        p = p->next;
        front = p->data;
        if (num <= front && num >= back)
        {
            break;
        }
    }
    new -> next = p -> next;
    new -> data = num;
    p -> next = new;

    printf("\n");
    return head;
}git 