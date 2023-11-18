#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void display()
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d", current->data);
        if (current->next != NULL)
        {
            printf(" -> ");
        }
        current = current->next;
    }
    printf(" -> NULL\n");
}

void reverse()
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

int main()
{
    int choice, data;

    while (1)
    {

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            display();
            break;
        case 3:
            reverse();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. Please choose a valid option.\n");
        }
    }

    return 0;
}
