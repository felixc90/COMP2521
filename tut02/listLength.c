#include <stdio.h>

struct node {
	int value;
	struct node *next;
};

int listLength(struct node *l) {
    // Base Case
    if (l == NULL) {
        return 0;
    }
    return 1 + listLength(l->next);

    // Recursive
}
