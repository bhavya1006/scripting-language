#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("Pushed element: %d\n", data);
}

int pop(struct Node** head) {
    if (*head == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    struct Node* temp = *head;
    int data = temp->data;
    *head = temp->next;
    free(temp);
    return data;
}

void display(struct Node* head) {
    if (head == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* current = head;
    printf("Stack: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* stack = NULL;

    // Push elements onto the stack
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);

    // Display the stack
    display(stack);

    // Pop an element from the stack
    int poppedElement = pop(&stack);
    printf("Popped element: %d\n", poppedElement);

    // Display the stack after popping
    display(stack);

    return 0;
}
