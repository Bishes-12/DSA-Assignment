#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
// Function to insert nodes at end (for testing)
void insertEnd(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
        return;
    }
    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newnode;
}
// Function to delete from beginning
void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    printf("Deleted node with value: %d\n", temp->data);
    free(temp);
}
// Function to display linked list
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
    int choice, value;
    while (1) {
        printf("\n1. Insert at End\n2. Delete from Beginning\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertEnd(value);
                break;
            case 2:
                deleteBeginning();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
