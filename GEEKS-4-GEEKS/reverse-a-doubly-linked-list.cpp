Node *reverseDLL(Node *head)
{
    Node *pre = NULL;
    Node *tmp = head;
    Node *nxt = NULL;
    while (tmp != NULL)
    {
        nxt = tmp->next;
        tmp->next = pre;
        tmp->prev = nxt;
        pre = tmp;
        tmp = nxt;
    }
    return pre;
}
