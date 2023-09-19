struct node
{
  int value;
  struct node *next;
};

struct list
{
  struct node *head;
};

void *listDelete(struct list *list, int value);