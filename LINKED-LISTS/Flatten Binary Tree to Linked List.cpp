class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root)
            return;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode *temp=s.top();
            s.pop();
            if(temp->right)
                s.push(temp->right);
            if(temp->left)
                s.push(temp->left);
            if(!s.empty())
                temp->right=s.top();
            temp->left=NULL;
        }
    }
};
