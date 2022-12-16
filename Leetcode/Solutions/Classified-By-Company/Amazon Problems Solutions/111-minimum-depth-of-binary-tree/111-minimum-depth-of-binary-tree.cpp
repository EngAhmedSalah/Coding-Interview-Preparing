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
    int mn;
    void DFS(TreeNode* root , int cnt)
    {
        if(root == nullptr)
            return;
        if(root->left == nullptr && root->right == nullptr)
             mn = min(cnt + 1 , mn);
        DFS(root->left , cnt + 1);
        DFS(root->right , cnt + 1);
    }
    int minDepth(TreeNode* root) {
        mn = INT_MAX;
        if(root == nullptr)
            return 0;
        DFS(root , 0);
        return mn;
    }
};