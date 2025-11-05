#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to insert node at end
void insertEnd(int value) {
    // Step 1: Create a new node
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    // Step 2: If list is empty, make newnode as head
    if (head == NULL) {
        head = newnode;
        return;
    }

    // Step 3: Otherwise, traverse to the last node
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Step 4: Link the last node to newnode
    temp->next = newnode;
}

// Function to display the linked list
void display() {
    struct node *temp = head;
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
    
    display(); // Output: 10 -> 20 -> 30 -> 40 -> NULL
    return 0;
}
