#include <stdio.h>

struct node {
	int value;
	struct node *next;
};

int listCountOdds(struct node *l) {
  // Base case
  if (l == NULL) {
    return 0;
  }
  // Recursive case
  // If odd...
  if (l->value % 2 == 1) {
    return 1 + listCountOdds(l->next);
  // If even...
  } else if (l->value % 2 == 0) {
    return listCountOdds(l->next);
  }

  return 0;
}
