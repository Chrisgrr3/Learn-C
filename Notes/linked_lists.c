#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int val;
    struct node *next;
} node_t;
void print_list(node_t *head);
void push(node_t *head, int val);
void push_to_front(node_t **head, int val);
int remove_from_front(node_t **head);
int remove_last(node_t *head);
int remove_by_index(node_t **head, int n);
void main()
{
    // Linked lists are the best and simplest example of a dynamic data structure that uses pointers.
    // They function as an array that can grow and shrink as needed from any point in the array.
    // These are the advantages of linked lists over arrays:
    // 1. Items can be added or removed from the middle of the list.
    // 2. There is no need to define initial size
    // There are also a few disadvantages to linked lists:
    // 1. It is impossible to reach the nth item in the list without first iterating over all items up until that item, starting from the first item.
    // 2. Dynamic memory allocation and pointers are needed, complicating code and increasing the risk of memory leaks and segment faults.
    // 3. They have a much larger overhead over arrays, because linked list items are dynamically allocated (less efficient in memory usage) and each item also must store an additional pointer.

    // What is a linked list?

    // A linked list is a set of dynamically allocated nodes, arranged in a way that each node contains one value and one pointer.
    // The pointer always points to the next member of the list and if it pointers to null, then it is the last node in the list.
    // A local pointer variable points at the first node in the list, and if that pointer is also null, then the list is considered empty.
    //              ------------------------------              ------------------------------
    //              |              |             |            \ |              |             |
    //   HEAD------>|     DATA     |     NEXT    |--------------|     DATA     |     NEXT    |
    //              |              |             |            / |              |             |
    //               ------------------------------              ------------------------------
    // Check the struct for node above for the code to defined a node.
    // The struct is defined in a recursive manner and the type is named node_t;
    // Check below to see how we can create a local variable that points to the first item of the list (the head). We set the value and set the next item to null if we want to finish populating the list. We also ensure to check if malloc returned a NULL value.
    // node_t *head = NULL;
    // head = (node_t *)malloc(sizeof(node_t));
    // if (head == NULL)
    // {
    //     return 1;
    // }

    // head->val = 1;
    // head->next = NULL;
    // Check below to see how we can add a variable to the end of the list, where we continue advancing to the next pointer. We can continue adding nodes, ut what we should really do is advance to the last item of the list until the next variable is NULL.
    node_t *head = NULL;
    head = (node_t *)malloc(sizeof(node_t));
    head->val = 1;
    head->next = (node_t *)malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;
    // Iterating over a list

    // We can create a function named print_list that prints all the items of a list. This is done using a 'current' pointer to keep track of the node that we are currently printing and after printing its value, we set the current pointer to the next node. We then print again until we've reach the end of the list (where the next node is NULL).
    // Lets try out the print_list function:
    print_list(head);

    // Adding an item to the end of the list

    // To iterate over the list, we use a pointer called current and set it to start from the head and in each step, we advance the pointer to the next item in the list until we reach the last item. View the 'push' function to see how this is done.
    // Let's now implement the 'push' function and print the list again:
    push(head, 3);
    printf("\n");
    print_list(head);
    printf("\n");

    // Adding an item to the beginning of the list (pushing to the list)

    // To add to the beginning of the list, we must:
    // 1. Create a new item and set its value
    // 2. Link the new item to point to the head of the list
    // 3. Set the head of the list to be our new item
    // This creates a new head to the list with a new value and keeps the rest of the list linked to it.
    // Because we use a function for this operation, we must pass in a pointer to the head pointer (a double pointer) to modify the head pointer.
    // Now, lets create a douple pointer for the head and run the push_to_front function to see this in action:
    node_t **ptr = &head;
    push_to_front(ptr, 8);
    print_list(head);

    // Removing the first item

    // Top pop a variable from the front of the list, we must:
    // 1. Take the next item that the head points to and save it
    // 2. Free the head item
    // 3. Set the head to be the next item that we've stored on the side.
    // We'll now run the remove_from_front function to see this in action.
    remove_from_front(ptr);
    printf("\n");
    print_list(head);

    // Removing the last item of the list

    // This is similar to adding to the end of the list, but with an exception - because we need to change one item before the last item, we must look two items ahead and see if the next item is the last one in the list.
    // Check the remove_last function to see how this is done.
    remove_last(head);
    printf("\n");
    print_list(head);

    // Removing a specific item

    // To remove a specific item from the list, by index from the beginning of the list or by its value, we need to go over all of the items, continuouslt looking ahead to see if we have reached the node before the item we want to remove. This is done because we must change the location to where the previous node points to.
    // To do this, we must:
    // 1. Iterate to the node before the node we need to delete
    // 2. Save the node we want to delete in a temporary pointer
    // 3. Set the previous node's next pointer to point to the node after the node we wish to delete
    // 4. Delete the node using the temporary pointer
    // Check the function remove_by_index to see how this is implemented
    // Now, lets add some nodes to our list and use the remove_by_index function.
    push(head, 6);
    push(head, 4);
    printf("Before removing item: \n");
    print_list(head);
    remove_by_index(ptr, 2);
    printf("\nAfter removing item: \n");
    print_list(head);
}
void print_list(node_t *head)
{
    node_t *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->val);
        current = current->next;
    }
}
void push(node_t *head, int val)
{
    node_t *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    // We are now at the last node in the list and create a new node.
    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->val = val;
    // Now, we designate the 'next' value of the node we just created to NULL;
    current->next->next = NULL;
}
void push_to_front(node_t **head, int val)
{
    node_t *new_node;
    new_node = (node_t *)malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}
int remove_from_front(node_t **head)
{
    int return_val = -1;
    node_t *next_node = NULL;

    if (*head == NULL)
    {
        // This will run if our list is empty.
        return -1;
    }
    // This set the next node to the node after the head node. *head denotes the pointer to the first node.
    next_node = (*head)->next;
    return_val = (*head)->val;
    free(*head);
    // We first free the head pointer and then set it to next_node
    *head = next_node;

    return return_val;
}
int remove_last(node_t *head)
{
    int return_val = 0;
    // If there's only one item in the list, this will remove it
    if (head->next == NULL)
    {
        return_val = head->val;
        free(head);
        return return_val;
    }

    // This will get us to the second to last node in the list:
    node_t *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }

    // Current now points to the second to last item of the list, and we must now remove current -> next;
    return_val = current->next->val;
    free(current->next);
    current->next = NULL;
    return return_val;
}
int remove_by_index(node_t **head, int n)
{
    int i = 0;
    int return_value = -1;
    node_t *current = *head;
    node_t *temp_node = NULL;

    if (n == 0)
    {
        return remove_from_front(head);
    }

    for (i = 0; i < n - 1; i++)
    {
        if (current->next == NULL)
        {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    return_value = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);

    return return_value;
}