#include <bits/stdc++.h>
int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    queue<pair<TreeNode<int> *, int>> Q;
    Q.push({root, 1});
    while (!Q.empty())
    {
        pair<TreeNode<int> *, int> pr = Q.front();
        TreeNode<int> *temp = pr.first;
        int level = pr.second;
        Q.pop();
        if (temp->val == searchedValue)
            return level;
        if (temp->left)
            Q.push({temp->left, level + 1});
        if (temp->right)
            Q.push({temp->right, level + 1});
        if (temp->val == searchedValue)
            return level;
    }
}
