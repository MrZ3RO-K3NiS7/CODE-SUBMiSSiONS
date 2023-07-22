bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    bool L = isNodePresent(root->left, x);
    bool R = isNodePresent(root->right, x);
    return (L || R);
}
