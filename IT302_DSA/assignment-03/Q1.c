#include <stdio.h>
#include <stdlib.h>
// Linked List Node
struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;

void createList()
{
    if (start == NULL)
    {
        int n;
        printf("\nEnter the no. of nodes: ");
        scanf("%d", &n);
        if (n != 0)
        {
            int data;
            struct node *newnode;
            struct node *temp;
            newnode = malloc(sizeof(struct node));
            start = newnode;
            temp = start;
            printf("\nEnter no. be inserted: ");
            scanf("%d", &data);
            start->info = data;
            for (int i = 2; i <= n; i++)
            {
                newnode = malloc(sizeof(struct node));
                temp->link = newnode;
                printf("\nEnter no. to be inserted: ");
                scanf("%d", &data);
                newnode->info = data;
                temp = temp->link;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}
// traverse the linked list
void traverse()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("Data = %d\n", temp->info);
            temp = temp->link;
        }
    }
}
// To insert at the front of LL
void insertAtFront()
{
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter no. to be inserted: ");
    scanf("%d", &data);
    temp->info = data;
    // Pointer of temp will be
    // assigned to start
    temp->link = start;
    start = temp;
}
// To insert at the end of LL
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));
    // Enter the no.
    printf("\nEnter no. to be inserted: ");
    scanf("%d", &data);
    // Changes links
    temp->link = 0;
    temp->info = data;
    head = start;
    while (head->link != NULL)
    {
        head = head->link;
    }
    head->link = temp;
}
// To insert at any specified position in LL
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter position and data:");
    scanf("%d %d", &pos, &data);
    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1)
    {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}
// To delete from the end of LL
void deleteEnd()
{
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("\nList is Empty\n");
    else
    {
        temp = start;
        while (temp->link != 0)
        {
            prevnode = temp;
            temp = temp->link;
        }
        free(temp);
        prevnode->link = 0;
    }
}
// To delete from any specified position from LL
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        printf("\nEnter index : ");
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = start;
        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }
        position = temp->link;
        temp->link = position->link;
        free(position);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at starting\n");
        printf("\t3 For insertion at end\n");
        printf("\t4 For insertion at any position\n");
        printf("\t5 For deletion of first element\n");
        printf("\t6 For deletion of last element\n");
        printf("\t7 For deletion of element at any position\n");
        printf("\t12 To exit\n");
        printf("\nEnter Choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        case 12:
            exit(1);
            break;
        default:
            printf("Incorrect Choice!\n");
        }
    }
    return 0;
}
