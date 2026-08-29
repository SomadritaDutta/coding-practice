#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// 1.Insert at Front 
void insertFront(int x)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->next = head;

    head = newNode;

    printf("Inserted %d at front.\n", x);
}

// 2.Insert at End 
void insertEnd(int x)
{
    struct Node *newNode;
    struct Node *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("Inserted %d at end.\n", x);
}

// 3.Insert After a Given Value 
void insertAfter(int key, int x)
{
    struct Node *temp;
    struct Node *newNode;

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));

            newNode->data = x;
            newNode->next = temp->next;

            temp->next = newNode;

            printf("Inserted %d after %d.\n", x, key);
            return;
        }

        temp = temp->next;
    }

    printf("Key %d not found.\n", key);
}

// 4.Insert at a Given Position 
void insertAtPosition(int pos, int x)
{
    struct Node *newNode;
    struct Node *temp;
    int i;

    if (pos < 1)
    {
        printf("Invalid position.\n");
        return;
    }

    if (pos == 1)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = x;
        newNode->next = head;

        head = newNode;

        printf("Inserted %d at position %d.\n", x, pos);
        return;
    }

    temp = head;

    for (i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position.\n");
        return;
    }

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->next = temp->next;

    temp->next = newNode;

    printf("Inserted %d at position %d.\n", x, pos);
}

// 5.Delete from Front 
void deleteFront()
{
    struct Node *temp;
    int value;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    value = temp->data;

    head = head->next;

    free(temp);

    printf("Deleted %d from front.\n", value);
}

// 6.Delete from End 
void deleteEnd()
{
    struct Node *temp;
    struct Node *prev;
    int value;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next == NULL)
    {
        value = head->data;

        free(head);
        head = NULL;

        printf("Deleted %d from end.\n", value);
        return;
    }

    temp = head;
    prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    value = temp->data;

    prev->next = NULL;

    free(temp);

    printf("Deleted %d from end.\n", value);
}

// 7.Delete by Value
void deleteByValue(int key)
{
    struct Node *temp;
    struct Node *prev;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->data == key)
    {
        temp = head;

        head = head->next;

        free(temp);

        printf("Deleted %d.\n", key);
        return;
    }

    temp = head;
    prev = NULL;

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Key %d not found.\n", key);
        return;
    }

    prev->next = temp->next;

    free(temp);

    printf("Deleted %d.\n", key);
}

// 8.Display the List 
void display()
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List: NULL\n");
        return;
    }

    temp = head;

    printf("List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice;
    int x;
    int key;
    int pos;

    while (1)
    {
        scanf("%d", &choice);

        switch (choice)
        { 
            case 1:
                scanf("%d", &x);
                insertFront(x);
                break;

            case 2:
                scanf("%d", &x);
                insertEnd(x);
                break;

            case 3:
                scanf("%d %d", &key, &x);
                insertAfter(key, x);
                break;

            case 4:
                scanf("%d %d", &pos, &x);
                insertAtPosition(pos, x);
                break;

            case 5:
                deleteFront();
                break;

            case 6:
                deleteEnd();
                break;

            case 7:
                scanf("%d", &key);
                deleteByValue(key);
                break;

            case 8:
                display();
                break;

            case 0:
                printf("Exiting.\n");

                while (head != NULL)
                {
                    struct Node *temp = head;
                    head = head->next;
                    free(temp);
                }

                return 0;

            default:
                break;
        }
    }

    return 0;
}