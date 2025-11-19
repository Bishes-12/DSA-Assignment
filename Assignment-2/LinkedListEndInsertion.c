#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
// Function to insert at the end
void insertEnd(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
        return;
    }
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}
// Function to display the list
void display() {
    struct node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    int value, choice = 1;
    while (choice) {
        printf("Enter value to insert at end: ");
        scanf("%d", &value);
        insertEnd(value);
        printf("Do you want to insert another node? (1/0): ");
        scanf("%d", &choice);
    }
    display();
    return 0;
}
