/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr)
            return root;
        queue<Node*> q;
        queue<Node*> qq;
        qq.push(root);
        q.push(root);
        while(!q.empty())
        {
            while(!qq.empty())
            {
                Node* u = qq.front();
                qq.pop();
                if(!qq.empty())
                    u->next = qq.front();
            }
            int qsz = q.size();
            for(int i = 0 ; i < qsz ; ++i)
            {
                Node* u = q.front();
                q.pop();
                if(u->left != nullptr)
                {
                     q.push(u->left);
                     qq.push(u->left);
                }
                   
                if(u->right != nullptr)
                {
                     q.push(u->right);
                     qq.push(u->right);
                }
            }
        }
        return root;
    }
};