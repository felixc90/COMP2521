#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

// Implement the following function that counts the number of values that are 
// greater than a given value. This function should avoid visiting nodes that
// it doesn't have to visit. Use the following function interface:



int bstCountGreater(struct node *t, int val) {
    // tree is empty
	if (t == NULL) {
		return 0;
	}

    if (t->value > val) {
        return 1 + bstCountGreater(t->left) + bstCountGreater(t->right);
    } else {
        return bstCountGreater(t->right);
    }

}

int bstCountOdds(struct node *t) {
	// base case


	// recursive case

	// if value is odd
	if (t->value % 2 == 1) {
		
	// if value is even
	} else {
		return bstCountOdds(t->left) + bstCountOdds(t->right);
	}
}
