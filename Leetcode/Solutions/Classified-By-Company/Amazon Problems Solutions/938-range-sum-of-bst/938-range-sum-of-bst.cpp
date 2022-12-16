/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum , l , r;
    void inorder(TreeNode* root)
    {
        if(root == nullptr)
            return;
        inorder(root->left);
        if(root->val >= l && root->val <= r)
            sum += root->val;
        inorder(root->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        l = low , r = high;
        inorder(root);
        return sum;
    }
};