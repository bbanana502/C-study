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

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* head = NULL;
Node* temp = NULL;
Node* newNode = NULL;
Node* newtemp = NULL;
int num = 0;
int target = 0;
int feat = 0;
int value = 0;
int count = 1;

void frontp(int num);
void indexp(int num, int target);
void lastp(int num);
void frontd();
void indexd(int target);
void lastd();

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


    printf("\n1: 첫번째 위치에 삽입\n2: 위치 입력받고 그 위치에 삽입\n3: 마지막 위치에 삽입\n4: 첫번째 노드 삭제\n5: 위치 입력받고 그 위치의 노드 삭제\n6: 마지막 노드 삭제\n어떤 기능을 사용하시겠습니까? : ");
    scanf("%d",&feat);
    if (feat == 1)
    {
        printf("삽입하고 싶은 값을 입력해주세요 : ");
        scanf("%d",&value);
        frontp(value);
    }
    else if (feat == 2)
    {
        printf("삽입하고 싶은 값을 입력해주세요 : ");
        scanf("%d",&value);
        printf("삽입하고 싶은 위치를 입력해주세요 : ");
        scanf("%d",&target);
        indexp(value, target);
    }
    else if (feat == 3)
    {
        printf("삽입하고 싶은 값을 입력해주세요 : ");
        scanf("%d",&value);
        lastp(value);
    }
    else if (feat == 4)
    {
        frontd();
    }
    else if (feat == 5)
    {
        printf("삭제하고 싶은 위치를 입력해주세요 : ");
        scanf("%d",&target);
        indexd(target);
    }
    else if (feat == 6)
    {
        lastd();
    }
    else
    {
        printf("잘못된 입력입니다 프로그램을 종료합니다.");
        return 1;
    }
    printf("결과 출력 : ");
    for (Node* i=head; i!=NULL; i=i->next)
    {
        printf("%d ",i->data);
    }
    return 0;
}

void frontp(int value){
    Node* NEW;
    NEW = (Node*)malloc(sizeof(Node));
    if (NEW == NULL)
    {
        printf("에러");
        return;
    }
    NEW->data = value;
    NEW->next = head;
    head = NEW;
    num++;
}
void indexp(int value, int target){
    if (target < 1 || target > num+1)
    {
        printf("잘못된 입력입니다 프로그램을 종료합니다.");
        return;
    }
    else if (target == 1)
    {
        frontp(value);
        return;
    }
    else if (target == num+1)
    {
        lastp(value);
        return;
    }
    Node* NEW;
    NEW = (Node*)malloc(sizeof(Node));
    if (NEW == NULL)
    {
        printf("에러");
        return;
    }
    NEW->data = value;
    newtemp = head;
    for (int i=0; i<target-2; i++)
    {
        if (newtemp->next == NULL)
        {
            printf("잘못된 입력입니다 프로그램을 종료합니다.");
            return;
        }
        newtemp = newtemp->next;
    }
    NEW->next = newtemp->next;
    newtemp->next = NEW;
    num++;
}
void lastp(int value)
{
    Node* NEW;
    NEW = (Node*)malloc(sizeof(Node));
    if (NEW == NULL)
    {
        printf("에러");
        return;
    }
    NEW->data = value;
    NEW->next = NULL;
    temp->next = NEW;
    temp = NEW;
    num++;
}
void frontd()
{
    head = head->next;
    num--;
}
void indexd(int target)
{
    newtemp = head;
    if (target < 1)
    {
        printf("잘못된 입력입니다 프로그램을 종료합니다.");
        return;
    }
    else if (target == 1)
    {
        frontd();
        return;
    }
    else if (target == num)
    {
        lastd();
        return;
    }
    for(int i=0; i<target-2; i++)
    {
        newtemp = newtemp->next;
    }
    newtemp->next = newtemp->next->next;
    num--;
}
void lastd()
{
    newtemp = head;
    for (int i=0; i<num; i++)
    {
        if (newtemp -> next == temp)
        {
            temp = newtemp;
            temp->next = NULL;
            break;
        }
        newtemp = newtemp->next;
    }
    num--;
}