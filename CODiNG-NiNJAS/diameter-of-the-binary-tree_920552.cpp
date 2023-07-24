int mx = 0;
int maxHeight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int D = l + r;
    mx = max(mx, D);
    return max(l, r) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    mx = 0;
    int H = maxHeight(root);
    return mx;
}
