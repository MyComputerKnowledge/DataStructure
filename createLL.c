/*C code to create and print the Linked List*/
#include <stdio.h>
#include <stdlib.h>
 
typedef struct node
{
    int data;
    struct node *next;
} NODE;
 
NODE *head = NULL;
 
NODE *newNodeF(int key)
{
    NODE *temp = (NODE *)malloc(sizeof(NODE));
    temp->data = key;
    temp->next = NULL;
    return temp;
}
 
void createList()
{
    NODE *temp, *newNode = NULL;
    int n, data;
    printf("Enter number of elements    ");
    scanf("%d", &n);
    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        newNode = newNodeF(data);
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
    }
}
 
void printList()
{
    NODE *temp = head;
    if (temp == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List is\t");
    while (temp != NULL)
    {
        printf("%d--> ", temp->data);
        temp = temp->next;
    }
}
 
int main()
{
    printList();
    createList();
    printList();
    printf("NULL\n");
    return 0;
}
