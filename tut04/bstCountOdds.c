#include <stdio.h>

// Implement the following function that counts the number of odd values in a
// tree. Use the following function interface:

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int bstCountOdds(struct node *t) {
	// base case

	// tree is empty
	if (t == NULL) {
		return 0;
	}

	// recursive case

	// if value is odd
	if (t->value % 2 == 1) {
		return 1 + bstCountOdds(t->left) + bstCountOdds(t->right);
	// if value is even
	} else {
		return bstCountOdds(t->left) + bstCountOdds(t->right);
	}
}
