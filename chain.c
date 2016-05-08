#include <stdio.h>
#include <stdbool.h>

typedef struct chain
{
    int value;
    struct chain *next;
} chain;

int createNode(int value);
void insertNode(chain *chainNode, int value);
bool findNode(chain *chainNode, int value);
void freeNode(chain *chainNode);

int main(void)
{
    chain list;
    list.value = 1;

    printf("%i", list.value);
    return 0;
}

int createNode(int value)
{
    // Allocate Memory for node
    // Check that we didn't run out of memory
    // Initialise Value
    // Initialise Next node
    // Return pointer to the newly created list
    return 0;
}
void insertNode(chain *chainNode, int value)
{
    // Allocate Memory for new node
    // Check that we didn't run out of memory
    // Create a new node
    // Insert the value
    // Set Next to point to first node
    // Set head of list to point to new node
}
bool findNode(chain *chainNode, int value)
{
    chain *ptr = chainNode;
    while (ptr != NULL)
    {
        if (ptr->value == value)
            return true;
        ptr = ptr->next;
    }
    // if chainNode next pointer == null return false;
    // if chainNode value == searched value return true;
    // Else set trav ptr to next node (recurse this function)
    return false;
}
void freeNode(chain *chainNode)
{
    // if points to null stop
    // Delete the rest of the list
    // Free current node;
}
