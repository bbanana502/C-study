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

    int target;
    Node* find = head;
    //찾는 부분 코딩
    printf("찾고싶은 수를 입력하세요 : ");
    scanf("%d",&target);
    int findness = 0;
    for (int i=0; i<num; i++)
    {
        if (find->data == target)
        {
            printf("%d번째 에 있습니다.",i+1);
            findness = 1;
            break;
        }
        else
        {
            find = find->next;
        }
    }
    if (findness == 0)
    {
        printf("지정된 값을 찾는데 실패하였습니다.\n");
        printf("프로그램을 종료합니다.");
    }

    return 0;
}

//노드의 개수를 입력받고 연결리스트 생성, 데이터 입력받아서 저장, 
//정수 입력받고 입력 받은 수가 저장되어 있는 노드 위치 출력