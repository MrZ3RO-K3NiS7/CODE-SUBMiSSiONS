class Solution
{
public:
    void insert(Node *&tail, Node *tmp)
    {
        tail->next = tmp;
        tail = tmp;
    }
    Node *segregate(Node *head)
    {
        Node *zerohead = new Node(-7);
        Node *zerotail = zerohead;
        Node *onehead = new Node(-7);
        Node *onetail = onehead;
        Node *twohead = new Node(-7);
        Node *twotail = twohead;
        Node *tmp = head;
        while (tmp != NULL)
        {
            int value = tmp->data;
            if (value == 0)
            {
                insert(zerotail, tmp);
            }
            else if (value == 1)
            {
                insert(onetail, tmp);
            }
            else if (value == 2)
            {
                insert(twotail, tmp);
            }
            tmp = tmp->next;
        }
        if (onehead->next != NULL)
        {
            zerotail->next = onehead->next;
        }
        else
        {
            zerotail->next = twohead->next;
        }
        onetail->next = twohead->next;
        twotail->next = NULL;
        head = zerohead->next;
        delete zerohead;
        delete onehead;
        delete twohead;
        return head;
    }
};
