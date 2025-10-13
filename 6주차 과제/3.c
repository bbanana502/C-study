#include<stdio.h>
#include<stdlib.h>

void front(int num);

void center(int num);

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

    int feat = 0;
    int value = 0;
    printf("어떤 기능을 수행하시겠습니까?(1: 제일 처음에 삽입  2: 정가운데에 삽입) : ");
    scanf("%d",&feat);
    printf("삽입하고 싶은 값을 입력해주세요 : ");
    scanf("%d",&value);
    if (feat == 1)
    {
        front(value);
    }
    else if (feat == 2)
    {
        center(value);
    }
}

void front(int num){
    
}

void center(int num){

}

// 노드의 개수를 입력받고 연결리스트 생성, 데이터 입력받아서 저장
// 1을 입력받으면 제일 처음에 삽입, 2를 입력받으면 연결리스트의 정가운데 삽입