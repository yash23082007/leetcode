class Solution {
public:
    int maxDepth = 0;
    int sum = 0;

    void findDepth(TreeNode* root, int depth) {
        if (!root) return;

        maxDepth = max(maxDepth, depth);

        findDepth(root->left, depth + 1);
        findDepth(root->right, depth + 1);
    }

    void dfs(TreeNode* root, int depth) {
        if (!root) return;

        if (depth == maxDepth) {
            sum += root->val;
            return;
        }

        dfs(root->left, depth + 1);
        dfs(root->right, depth + 1);
    }

    int deepestLeavesSum(TreeNode* root) {
        findDepth(root, 0);
        dfs(root, 0);

        return sum;
    }
};