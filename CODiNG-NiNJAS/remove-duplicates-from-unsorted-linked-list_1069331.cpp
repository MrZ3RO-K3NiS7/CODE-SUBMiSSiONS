// TiME LiMiT EXCEEDS !!!

#include <bits/stdc++.h>
Node *removeDuplicates(Node *head)
{
    Node *current = head;
    while (current != NULL && current->next != NULL)
    {
        Node *temporary = current;
        while (temporary->next != NULL)
        {
            if (temporary->next->data == current->data)
            {
                Node *delnode = temporary->next;
                temporary->next = temporary->next->next;
                delete delnode;
            }
            else
            {
                temporary = temporary->next;
            }
        }
        current = current->next;
    }
    return head;
}



// ACCEPTS !!!

#include <bits/stdc++.h>
Node *removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *current = head;
    Node *temporary = NULL;
    unordered_map<int, bool> MARKED;
    while (current != NULL)
    {
        if (MARKED[current->data] == true)
        {
            temporary->next = current->next;
            delete current;
            current = temporary->next;
        }
        else
        {
            MARKED[current->data] = true;
            temporary = current;
            current = current->next;
        }
    }
    return head;
}
