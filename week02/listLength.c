typedef struct node
{
    int data;
    struct node *next;
} Node;

typedef Node *List;

int listLength(List l)
{
    int length = 0;
    for (List curr = l; curr != NULL; curr = curr->next)
    {
        length++;
    }
    return length;
}

int listLength(List l)
{
    if (l == NULL)
    {
        return 0;
    }
    return 1 + listLength(l->next);
}