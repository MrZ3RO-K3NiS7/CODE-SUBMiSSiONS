class Solution {
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *tmp = head;
        int C = 0;
        while (tmp != NULL)
        {
            C++;
            tmp = tmp->next;
        }
        ListNode *temp = head;
        if (C == 1)
        {
            return temp;
        }
        for (int i = 1; i <= C / 2 - 1; i++)
        {
            temp = temp->next;
        }
        return temp->next;
    }
};
