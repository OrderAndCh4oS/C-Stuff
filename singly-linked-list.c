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
void destroy(node head);

int main(void)
{
    struct node list = createList(123);
    struct node *pList = &list;
    if (find(list, 123))
        printf("Found %i\n", list.val);
    else
        printf("Not Found\n");
    list = insert(list, 145);
    pList = &list;
    printf("%i\n", list.val);
    printf("%i\n", list.next->val);
    if (find(list, 145))
    {
        printf("Found %i\n", list.next->val);
    }
    printf("%i\n", list.val);
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
    if (crawler->val == data)
        return true;
    // Else set traversal pointer to next pointer and repeat
    while (crawler->next != NULL)
    {
        crawler = crawler->next;
            if (crawler->val == data)
                return true;
    }
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

void destroy(node head)
{
    // Not tested
    node* crawler = &head;
    // If null stop
    if (crawler->next != NULL)
        destroy(*crawler);

    free(crawler);
    // Delete the rest of the list
    // Free the current node
}
