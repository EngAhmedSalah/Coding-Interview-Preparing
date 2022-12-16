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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> > ans;
        if(root == nullptr)
            return ans;
        bool left = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int queueSize = q.size();
            vector<int> v;
            for(int i = 0 ; i < queueSize ; ++i)
            {
                TreeNode* u = q.front();
                q.pop();
                v.push_back(u->val);
                if(u->left != nullptr)
                    q.push(u->left);
                if(u->right != nullptr)
                    q.push(u->right);
            }
            if(left)
                ans.push_back(v);
            else
            {
                reverse(v.begin() , v.end());
                ans.push_back(v);
            }
            left = !left;
        }
        return ans;
    }
};