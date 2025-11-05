// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    
};
struct node *head = NULL;
void insertb(int value){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data =value;
    newnode->next=head;
    head =newnode;

}
void display(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ->",temp->data);
        temp = temp ->next;
        
    }
    printf("NULL");
}
int main() {
    insertb(10);
    insertb(20);
    insertb(30);
    display();
    return 0;
}
