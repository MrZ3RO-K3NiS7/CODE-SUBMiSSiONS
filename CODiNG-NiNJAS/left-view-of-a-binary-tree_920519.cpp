#include <bits/stdc++.h>
vector<int> getLeftView(TreeNode<int> *root)
{
    bool freq[3005] = {false};
    queue<pair<TreeNode<int> *, int>> Q;
    if (root)
        Q.push({root, 1});
    vector<int> V;
    while (!Q.empty())
    {
        pair<TreeNode<int> *, int> pr = Q.front();
        Q.pop();
        TreeNode<int> *temp = pr.first;
        int level = pr.second;
        if (temp->left)
            Q.push({temp->left, level + 1});
        if (temp->right)
            Q.push({temp->right, level + 1});
        if (freq[level] == false)
        {
            V.push_back(temp->data);
            freq[level] = true;
        }
    }
    return V;
}
