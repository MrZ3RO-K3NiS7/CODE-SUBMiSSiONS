class Solution {
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int C = 0;
        while (tmp != NULL)
        {
            tmp = tmp->next;
            C++;
        }
        return C;
    }
    void del_one_ele(ListNode *&head)
    {
        ListNode *delnode = head;
        head = head->next;
        delete delnode;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *tmp = head;
        int Sz = size(head);
        for (int i = 1; i <= Sz - n - 1; i++)
        {
            tmp = tmp->next;
        }
        if (Sz == n)
        {
            del_one_ele(head);
            return head;
        }
        ListNode *delnode = tmp->next;
        tmp->next = tmp->next->next;
        delete delnode;
        return head;
    }
};
