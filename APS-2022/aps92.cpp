int height(struct Node* node)
{
    // if node is null, we return 0.
    if (node == NULL) return 0;

    //else we call the recursive function, height for left and right 
    //subtree and choose their maximum. we also add 1 to the result
    //which indicates height of root of the tree.
    else {
        int lHeight = height(node->left);
        int rHeight = height(node->right);

        if (lHeight > rHeight) {
            return lHeight + 1;
        }
        else {
            return rHeight + 1;
        }
    }
}