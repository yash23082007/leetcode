class Solution {
public:

    // First incorrect node
    TreeNode *first = NULL;

    // Second incorrect node
    TreeNode *second = NULL;

    // Previous node visited in inorder
    TreeNode *prev = NULL;

    void inorder(TreeNode* root)
    {
        // Base case
        if(root == NULL)
            return;

        // Visit left subtree
        inorder(root->left);

        // If previous value is greater than current,
        // inorder sequence is broken.
        if(prev != NULL && prev->val > root->val)
        {
            // First violation
            if(first == NULL)
            {
                first = prev;   // Bigger wrong value
            }

            // Update second every time.
            // For adjacent swaps this runs once.
            // For non-adjacent swaps this finally becomes
            // the smaller swapped node.
            second = root;
        }

        // Update previous node
        prev = root;

        // Visit right subtree
        inorder(root->right);
    }

    void recoverTree(TreeNode* root)
    {
        // Detect two swapped nodes
        inorder(root);

        // Swap their values
        swap(first->val, second->val);
    }
};