#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Function to insert a node at the end
void insertEnd(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node at a specific position
void deleteAtPosition(int position) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    // Deleting the first node
    if (position == 1) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return;
    }

    struct Node *temp = head;
    struct Node *prev = NULL;

    // Traverse to the given position
    for (int i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If position is invalid
    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to display the list
void display() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    display();

    deleteAtPosition(3);  // Delete node at position 3 (value 30)
    display();

    deleteAtPosition(1);  // Delete first node (value 10)
    display();

    deleteAtPosition(10); // Try deleting invalid position
    display();

    return 0;
}
