class Solution {
public:
    int count(TreeNode* root, int maxVal) {
        if (root == NULL)
            return 0;

        int ans = 0;//intializing ans with zero

        // Current node is good
        if (root->val >= maxVal)
            ans = 1;

        // Update maximum value seen so far
        maxVal = max(maxVal, root->val);

        // Count good nodes in left and right subtrees
        return ans + count(root->left, maxVal) + count(root->right, maxVal);
    }

    int goodNodes(TreeNode* root) {
        return count(root, root->val);
    }
};