class Solution
{
public:
    Node *findMID(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    Node *mergelist(Node *left, Node *right)
    {
        if (left == NULL)
        {
            return right;
        }
        if (right == NULL)
        {
            return left;
        }
        Node *ans = new Node(-7);
        Node *temp = ans;
        while (left != NULL && right != NULL)
        {
            if (left->data < right->data)
            {
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else
            {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        while (left != NULL)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        while (right != NULL)
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
        ans = ans->next;
        return ans;
    }
    Node *mergeSort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *MID = findMID(head);
        Node *left = head;
        Node *right = MID->next;
        MID->next = NULL;
        left = mergeSort(left);
        right = mergeSort(right);
        Node *result = mergelist(left, right);
        return result;
    }
};
