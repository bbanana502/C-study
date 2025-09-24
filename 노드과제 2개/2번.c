#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main(void)
{
    Node one, two, three, four;

    int num;
    printf("첫번째 데이터값>");
    scanf("%d", &num);
    one.data = num;
    one.next = &two;

    printf("두번째 데이터값>");
    scanf("%d", &num);
    two.data = num;
    two.next = &three;

    printf("세번째 데이터값>");
    scanf("%d", &num);
    three.data = num;
    three.next = &four;

    printf("네번째 데이터값>");
    scanf("%d", &num);
    four.data = num;
    four.next = NULL;

    int sum = 0;
    Node* p = &one;
    for (int i = 0; i < 4; i++) {
        sum = sum + p->data;
        p = p->next;
    }
    printf("%d",sum);
}
