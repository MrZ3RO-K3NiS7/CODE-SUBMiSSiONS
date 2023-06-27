class Solution {
public:
    void insert(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void reverse(ListNode *&head, ListNode *curr)
    {
        if (curr->next == NULL)
        {
            head = curr;
            return;
        }
        reverse(head, curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    }
    bool isPalindrome(ListNode *head)
    {
        ListNode *newhead = NULL;
        ListNode *newtail = NULL;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            insert(newhead, newtail, tmp->val);
            tmp = tmp->next;
        }
        reverse(newhead, newhead);
        ListNode *oldtmp = head;
        ListNode *newtmp = newhead;
        while (newtmp != NULL)
        {
            if (oldtmp->val != newtmp->val)
            {
                return false;
            }
            oldtmp = oldtmp->next;
            newtmp = newtmp->next;
        }
        return true;
    }
};
