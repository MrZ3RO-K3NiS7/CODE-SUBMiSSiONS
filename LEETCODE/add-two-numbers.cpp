class Solution {
public:
    void insertAtTail(ListNode *&head, ListNode *&tail, int v)
    {
        ListNode *temp = new ListNode(v);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    ListNode *sumofnums(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;
        while (l1 != NULL || l2 != NULL || carry != 0)
        {
            int v1 = 0;
            if (l1 != NULL)
            {
                v1 = l1->val;
            }
            int v2 = 0;
            if (l2 != NULL)
            {
                v2 = l2->val;
            }
            int sum = v1 + v2 + carry;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            if (l1 != NULL)
            {
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                l2 = l2->next;
            }
        }
        return ansHead;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        return sumofnums(l1, l2);
    }
};
