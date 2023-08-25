/*
 *file :0-print_list.c
 *
 */
#include <lists.h>
#include <stdio.h>  // for printf

// Function to print all elements of the linked list and count nodes
size_t print_list(const list_t *h) {
    size_t count = 0; // Initialize the node count to 0

    // Traverse the linked list
    while (h !=NULL) {
        // Check if the string is NULL and print "[0] (nil)" if it is
        if (h->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            // Print the current node's string and increment the count
            printf("[%lu] %s\n", h->len, h->str);
	    
        }

	count++;
        // Move to the next node
        h = h->next;
        
    }

    return count; // Return the total number of nodes
}
