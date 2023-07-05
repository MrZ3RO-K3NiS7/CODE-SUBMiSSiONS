class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *CheckRevPossible = head;
        for (int i = 0; i < k; i++)
        {
            if (CheckRevPossible == NULL)
            {
                return head;
            }
            CheckRevPossible = CheckRevPossible->next;
        }
        ListNode *prev = NULL;
        ListNode *temp = head;
        ListNode *next = NULL;
        int COUNT = 0;
        while (temp != NULL && COUNT < k)
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            COUNT++;
        }
        if (next != NULL)
        {
            head->next = reverseKGroup(next, k);
        }
        return prev;
    }
};
