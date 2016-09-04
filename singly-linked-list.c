#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int val;
    struct node *next;
} node;

node createList(int data);
bool find(node head, int data);
node insert(node head, int data);
void destroy(node *head);

int main(void)
{
    struct node list;
    struct node *pList;
    list = createList(123);
    pList = &list;
    if (find(list, 123))
        printf("Found %i\n", pList->val);
    else
        printf("Not Found\n");
    list = insert(list, 145);
    list = insert(list, 125);
    printf("%p\n", pList->next->next);
    if (find(list, 145))
    {
        printf("Found %i\n", pList->val);
    } else {
        printf("Not Found\n");
    }
    if (find(list, 123))
    {
        printf("Found %i\n", pList->next->val);
    }
    if (find(list, 125))
    {
        printf("Found");
    } else {
        printf("Not Found");
    }
    printf("passed not found example");

    //destroy(list);
    //printf("%i\n", list.val);
    return 0;
}

node createList(int data)
{
    // Allocate Space for new node
    // Check we have enough memory

    // Initialise node value
    struct node list;
    list.val = data;
    // Initialise nodes next field
    list.next = NULL;
    // Return pointer to new node
    return list;
}

bool find(node head, int data)
{
    // Create traversal pointer pointing to the list head
    node *crawler = &head;
    // If the current node val is equal to data return true
    do
    {
        printf("crawler: %i\n", crawler->val);
        printf("crawler pointer: %p\n", crawler->next);
        if (crawler->val == data)
            return true;
        if (crawler->next != 0)
        {
            crawler = crawler->next;
        }
    } while (crawler->next != NULL);
    // Else set traversal pointer to next pointer and repeat
    // If node val ever equals NULL return false
    return false;
}

node insert(node head, int data)
{
    // Allocate Space
    // Check we still have memory
    // Populate the node
    struct node list;
    list.val = data;
    list.next = &head;
    // Return Pointer to new head of linked list
    return list;
}

void destroy(node *head)
{
    // Not tested
    node* crawler = head;
    // If null stop
    if (crawler->next != NULL)
    free(crawler);
    // Delete the rest of the list
    // Free the current node
}
