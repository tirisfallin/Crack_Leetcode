class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left&&!root->right)
            return 1;
       else  if(!root->left&&root->right)
            return 1+minDepth(root->right);
       else if(root->left&&!root->right)
            return 1+minDepth(root->left);
        else
            return 1+min(minDepth(root->right),minDepth(root->left));
        
    }
};
