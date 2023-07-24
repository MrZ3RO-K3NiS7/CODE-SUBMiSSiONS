#include <bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    vector<int> V;
    queue<TreeNode<int> *> Q;
    if (root)
        Q.push(root);
    while (!Q.empty())
    {
        TreeNode<int> *temp = Q.front();
        Q.pop();
        V.push_back(temp->val);
        if (temp->left)
            Q.push(temp->left);
        if (temp->right)
            Q.push(temp->right);
    }
    reverse(V.begin(), V.end());
    return V;
}
