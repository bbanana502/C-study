#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

int main(void)
{
    int num;
    printf("몇 개의 노드를 생성하시겠습니까? : ");
    scanf("%d", &num);

    Node** nodes = (Node**)malloc(sizeof(Node*) * num);

    for (int i = 0; i < num; i++) {
        nodes[i] = (Node*)malloc(sizeof(Node));
        nodes[i]->left = NULL;
        nodes[i]->right = NULL;

        printf("노드[%d]의 데이터값> ", i);
        scanf("%d", &nodes[i]->data);
    }

    for (int i = 0; i < num; i++) {
        int leftIndex = 2 * i + 1;
        int rightIndex = 2 * i + 2;

        if (leftIndex < num)
            nodes[i]->left = nodes[leftIndex];
        if (rightIndex < num)
            nodes[i]->right = nodes[rightIndex];
    }
    //결과 출력
    printf("\n노드 배열 순서 출력: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", nodes[i]->data);
    }
    return 0;
}
