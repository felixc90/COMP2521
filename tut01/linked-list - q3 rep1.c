struct node
{
  int value;
  struct node *next;
};

struct node *listDelete(struct node *list, int value)
{
  // empty list
  if (list == NULL)
  {
    return list;
  }

  // value is start of list
  if (list->value == value)
  {
    struct node *temp = list->next;
    free(list);
    list = temp;
  }

  // middle of list
}