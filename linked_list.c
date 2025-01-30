// Prepends numbers to a linked list, using while loop to print

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[]) // ./list 1 2 . . . .
{
    // Memory for numbers
    node *list = NULL;

    // For each command-line argument
    for (int i = 1; i < argc; i++)
    {
        // Convert argument to int
        int number = atoi(argv[i]);

        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number; // will put the number 1
        n->next = NULL; // pointer to list

        // Prepend node to list
        n->next = list;
        list = n;
    } // the same process is repeated for consecutive numbers

    // Print numbers
    node *ptr = list; // creates a temporary variable that points at the same spot that list points to
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number); // prirnts what the node 'ptr' points to
        ptr = ptr->next; // updates 'ptr' to the next node on the list
    }

    // Free memory
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr); // free ups each of the memory taken by each array input
        ptr = next;
    }
}
