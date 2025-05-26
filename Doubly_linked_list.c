#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef Node* NODE;

// Create a new node
NODE Create(int x) {
    NODE nn = (NODE)malloc(sizeof(Node));
    if (nn == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    nn->data = x;
    nn->prev = NULL;
    nn->next = NULL;
    return nn;
}

// Insert at beginning
NODE insertStart(NODE head, int x) {
    NODE nn = Create(x);
    if (head == NULL) {
        return nn;
    }
    nn->next = head;
    head->prev = nn;
    return nn;  // new head
}

// Insert at end
NODE insertEnd(NODE head, int x) {
    NODE nn = Create(x);
    if (head == NULL) {
        return nn;
    }
    NODE temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nn;
    nn->prev = temp;
    return head;
}

// Insert at given position (1-based)
NODE insertAtPosition(NODE head, int x, int pos) {
    if (pos < 1) {
        printf("Position should be >= 1\n");
        return head;
    }
    if (pos == 1) {
        return insertStart(head, x);
    }

    NODE nn = Create(x);
    NODE temp = head;
    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position is beyond list length. Inserting at end.\n");
        return insertEnd(head, x);
    }

    nn->next = temp->next;
    nn->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = nn;

    temp->next = nn;

    return head;
}

// Delete at beginning
NODE deleteAtBeginning(NODE head) {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return NULL;
    }
    NODE temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
    return head;
}

// Delete at end
NODE deleteAtEnd(NODE head) {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return NULL;
    }
    NODE temp = head;

    if (temp->next == NULL) {
        free(temp);
        return NULL;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
    return head;
}

// Delete at given position (1-based)
NODE deleteAtPosition(NODE head, int pos) {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return NULL;
    }
    if (pos < 1) {
        printf("Position should be >= 1\n");
        return head;
    }
    if (pos == 1) {
        return deleteAtBeginning(head);
    }

    NODE temp = head;
    int count = 1;

    while (temp != NULL && count < pos) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position does not exist.\n");
        return head;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    return head;
}

// Display forward
void displayForward(NODE head) {
    NODE temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Display backward
void displayBackward(NODE head) {
    if (head == NULL) return;
    NODE temp = head;
    // Move to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }
    printf("Backward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    NODE head = NULL;

    head = insertStart(head, 10);  // 10
    head = insertStart(head, 20);  // 20 <-> 10
    head = insertEnd(head, 30);    // 20 <-> 10 <-> 30
    head = insertEnd(head, 40);    // 20 <-> 10 <-> 30 <-> 40

    printf("Original list:\n");
    displayForward(head);
    displayBackward(head);

    printf("\nInsert 25 at position 3:\n");
    head = insertAtPosition(head, 25, 3);
    displayForward(head);

    printf("\nDelete at position 2:\n");
    head = deleteAtPosition(head, 2);
    displayForward(head);

    printf("\nDelete at beginning:\n");
    head = deleteAtBeginning(head);
    displayForward(head);

    printf("\nDelete at end:\n");
    head = deleteAtEnd(head);
    displayForward(head);

    return 0;
}
