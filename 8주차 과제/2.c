#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node* left;
    struct Node* right;
    int data;
} Node;

void front(Node* node) {
    if (node != NULL) {
        printf("%d ", node->data);
        front(node->left);
        front(node->right);
    }
}

void now(Node* node) {
    if (node != NULL) {
        now(node->left);
        printf("%d ", node->data);
        now(node->right);
    }
}

void back(Node* node) {
    if (node != NULL) {
        back(node->left);
        back(node->right);
        printf("%d ", node->data);
    }
}

int main(void) {
    int nodeCount;
    printf("노드 개수를 입력하세요: ");
    scanf("%d", &nodeCount);

    Node* nodes[nodeCount];
    int currentCount = 0;

    Node* root = (Node*)malloc(sizeof(Node));
    root->left = NULL;
    root->right = NULL;
    printf("루트 노드 데이터값: ");
    scanf("%d", &root->data);
    nodes[currentCount++] = root;

    while (1) {
        int cmd;
        printf("\n부모 노드 데이터 입력 (-1: 종료, -2: 순회 출력) : ");
        scanf("%d", &cmd);

        if (cmd == -1) {
            break;
        }

        if (cmd == -2) {
            printf("전위 : ");
            front(root);
            printf("\n");
            printf("중위 : ");
            now(root);
            printf("\n");
            printf("후위 : ");
            back(root);
            printf("\n");
            continue;
        }

        Node* parent = NULL;
        for (int i = 0; i < currentCount; i++) {
            if (nodes[i]->data == cmd) {
                parent = nodes[i];
                break;
            }
        }

        if (parent == NULL) {
            printf("부모 노드를 찾을 수 없습니다. 다시 입력하세요.\n");
            continue;
        }

        int direction;
        printf("왼쪽(1) 또는 오른쪽(2)에 삽입하시겠습니까? : ");
        scanf("%d", &direction);

        Node* NEW = (Node*)malloc(sizeof(Node));
        NEW->left = NULL;
        NEW->right = NULL;

        int truth = 0;
        while (!truth) {
            printf("새 노드 데이터 입력: ");
            scanf("%d", &NEW->data);
            truth = 1;
            for (int i = 0; i < currentCount; i++) {
                if (nodes[i]->data == NEW->data) {
                    printf("에러: 이미 존재하는 데이터입니다. 다시 입력하세요.\n");
                    truth = 0;
                    break;
                }
            }
        }

        if (direction == 1) {
            if (parent->left != NULL) {
                printf("왼쪽 자리가 이미 차있습니다.\n");
                continue;
            } else {
                parent->left = NEW;
            }
        } else if (direction == 2) {
            if (parent->right != NULL) {
                printf("오른쪽 자리가 이미 차있습니다.\n");
                continue;
            } else {
                parent->right = NEW;
            }
        } else {
            printf("잘못된 방향 입력입니다.\n");
            continue;
        }

        nodes[currentCount++] = NEW;

        if (currentCount >= nodeCount) {
            printf("노드 개수에 도달했습니다.\n");
            break;
        }
    }

    printf("\n현재까지 입력된 노드 데이터 출력: ");
    for (int i = 0; i < currentCount; i++) {
        printf("%d ", nodes[i]->data);
    }
    printf("\n");

    return 0;
}
