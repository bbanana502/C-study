#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL");
}

Node* insertFront(Node *head, int data) {
    Node *newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

Node* insertMiddle(Node *head, int data) {
    if (head == NULL) return createNode(data);

    Node *slow = head;        // 1칸
    Node *fast = head->next;  // 2칸

    while (fast != NULL && fast->next != NULL) { // fast가 리스트 끝 또는 끝 바로 앞에 도달할 때까지 반복
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *newNode = createNode(data);  // 새 노드
    newNode->next = slow->next;        // 새 노드 next -> slow 다음 노드
    slow->next = newNode;              // slow의 next -> 새 노드
    return head;                       // 헤드 안 바뀜 반환
}

int main() {
    int n, value, position;
    Node *head = NULL;
    Node *tail = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        Node *newNode = createNode(value);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    scanf("%d %d", &position, &value);

    if (position == 1) {
        head = insertFront(head, value);
    } else if (position == 2) {
        head = insertMiddle(head, value);
    } else {
        printf("ERROR");
    }

    printList(head);

    Node *current = head;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
