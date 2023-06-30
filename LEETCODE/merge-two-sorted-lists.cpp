class Solution {
public:
    ListNode *solve(ListNode *first, ListNode *second)
    {
        if (first->next == NULL)
        {
            first->next = second;
            return first;
        }
        ListNode *tmp1 = first;
        ListNode *next1 = tmp1->next;
        ListNode *tmp2 = second;
        ListNode *next2 = tmp2->next;
        while (next1 != NULL && tmp2 != NULL)
        {
            if ((tmp1->val <= tmp2->val) && (tmp2->val <= next1->val))
            {
                tmp1->next = tmp2;
                next2 = tmp2->next;
                tmp2->next = next1;
                tmp1 = tmp2;
                tmp2 = next2;
            }
            else
            {
                tmp1 = next1;
                next1 = next1->next;
                if (next1 == NULL)
                {
                    tmp1->next = tmp2;
                    return first;
                }
            }
        }
        return first;
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
        {
            return list2;
        }
        if (list2 == NULL)
        {
            return list1;
        }
        if (list1->val < list2->val)
        {
            return solve(list1, list2);
        }
        else
        {
            return solve(list2, list1);
        }
    }
};
