#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct node {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp;
    int choice = 1;

    while (choice == 1)
    {
        newnode = malloc(sizeof *newnode);
        if (newnode == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            break;
        }

        printf("Enter Data: ");
        if (scanf("%d", &newnode->data) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(newnode);
            break;
        }
        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (1=yes/0=no): ");
        if (scanf("%d", &choice) != 1) {
            fprintf(stderr, "Invalid input\n");
            break;
        }
    }

    temp = head;
    printf("List contents:");
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp=temp->next;
    }
}