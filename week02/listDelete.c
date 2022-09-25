typedef struct node
{
    int data;
    struct node *next;
} Node;

typedef Node *List;

List listDelete(List l, int value)
{
    if (l == NULL)
    {
        return NULL;
    }
    if (l->data == value)
    {
        return l->next;
    }
    l->next = listDelete(l->next, value);
    return l;
}