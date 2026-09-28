// Title: Root Equals Sum of Children
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/root-equals-sum-of-children/

 */
 * };
 *     struct TreeNode *right;
 *     struct TreeNode *left;
 *     int val;
 * struct TreeNode {
 * Definition for a binary tree node.
/**
bool checkTree(struct TreeNode* root) {
    if (root->left->val + root->right->val == root->val)
        return true;
    return false;
}
