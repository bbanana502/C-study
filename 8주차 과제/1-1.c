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

Node* findNode(Node* nodes[], int count, int data) {
    for (int i = 0; i < count; i++) {
        if (nodes[i]->data == data) {
            return nodes[i];
        }
    }
    return NULL;
}

int main(void) {
    int nodeCount;
    printf("노드 개수를 입력하세요: ");
    scanf("%d", &nodeCount);

    Node* nodes[nodeCount];
    int currentCount = 0;

    nodes[0] = (Node*)malloc(sizeof(Node));
    nodes[0]->left = NULL;
    nodes[0]->right = NULL;
    printf("루트 노드 데이터값: ");
    scanf("%d", &nodes[0]->data);
    currentCount++;

    while (currentCount < nodeCount) {
        Node* NEW = (Node*)malloc(sizeof(Node));
        NEW->left = NULL;
        NEW->right = NULL;

        int truth = 0;
        while (!truth) {
            printf("\n새 노드 데이터 입력: ");
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

        int truth2 = 0;
        while (!truth2) {
            int command, direction;
            printf("부모 노드 데이터 입력 (-2: 순회 출력, -1: 종료) : ");
            scanf("%d", &command);

            if (command == -2) {
                printf("전위(front) : "); front(nodes[0]); printf("\n");
                printf("중위(now)  : "); now(nodes[0]); printf("\n");
                printf("후위(back) : "); back(nodes[0]); printf("\n");
                continue;
            }

            if (command == -1) {
                break;
            }

            Node* parent = findNode(nodes, currentCount, command);
            if (parent == NULL) {
                printf("부모 노드를 찾을 수 없습니다. 다시 입력하세요.\n");
                continue;
            }

            printf("왼쪽(1) 또는 오른쪽(2)에 삽입하시겠습니까? : ");
            scanf("%d", &direction);

            if (direction == 1) {
                if (parent->left != NULL) {
                    printf("왼쪽 자리가 이미 차있습니다. 다시 시도하세요.\n");
                    continue;
                }
                parent->left = NEW;
            } else if (direction == 2) {
                if (parent->right != NULL) {
                    printf("오른쪽 자리가 이미 차있습니다. 다시 시도하세요.\n");
                    continue;
                }
                parent->right = NEW;
            } else {
                printf("잘못된 방향 입력입니다. 다시 시도하세요.\n");
                continue;
            }

            nodes[currentCount++] = NEW;
            truth2 = 1;
        }

        if (!truth2) {
            break;
        }
    }

    printf("\n최종 트리 데이터 출력: ");
    for (int i = 0; i < currentCount; i++) {
        printf("%d ", nodes[i]->data);
    }
    printf("\n");

    return 0;
}
