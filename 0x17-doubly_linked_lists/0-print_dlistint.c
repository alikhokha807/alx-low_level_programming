#include <stdio.h>
#include <stddef.h> // for size_t

// Define the structure for a doubly linked list node
typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

// Function to print the elements of a doubly linked list
size_t print_dlistint(const dlistint_t *h) {
    size_t node_count = 0;

    // Traverse the list and print each element
    while (h != NULL) {
        printf("%d\n", h->n);
        h = h->next;
        node_count++;
    }

    return node_count;
}

// Example usage in a main function
int main(void) {
    // Create a sample doubly linked list
    dlistint_t node1 = {1, NULL, NULL};
    dlistint_t node2 = {2, NULL, NULL};
    dlistint_t node3 = {3, NULL, NULL};

    // Link the nodes
    node1.next = &node2;
    node2.prev = &node1;
    node2.next = &node3;
    node3.prev = &node2;

    // Print the doubly linked list
    size_t count = print_dlistint(&node1);

    printf("Number of nodes: %zu\n", count);

    return 0;
}

