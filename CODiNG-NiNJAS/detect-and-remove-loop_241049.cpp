Node *loopDetection(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return fast;
        }
    }
    return NULL;
}
Node *startingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersect = loopDetection(head);
    if (intersect == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    while (slow != intersect)
    {
        slow = slow->next;
        intersect = intersect->next;
    }
    return intersect;
}
Node *removeLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *startofloop = startingNode(head);
    if (startofloop == NULL)
    {
        return head;
    }
    Node *tmp = startofloop;
    while (tmp->next != startofloop)
    {
        tmp = tmp->next;
    }
    tmp->next = NULL;
    return head;
}
