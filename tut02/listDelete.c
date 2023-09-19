#include <stdio.h>

struct node {
	int value;
	struct node *next;
};

// Write a recursive function to delete the first instance of a value from a 
// linked list, if it exists. The function should return a pointer to the 
// beginning of the updated list. Use the following interface:

struct node *listDelete(struct node *l, int value) {
    // Base Case
    // One base casse is if we don't find the value in the list and we reach null
    if (l == NULL) {
      return NULL;
    }
    // Another base case is finding the node that we need to delete
    if (l->value == value) {
        struct node *temp = l->next;
        free(l);
        return temp;
    }
    // Recursive Case
    l->next = listDelete(l->next, value);
    return l;
}
