class Solution {
public:
    
    void leftright(TreeNode* root){
        if(root->left)
            leftright(root->left);
        if(root->right)
            leftright(root->right);
        TreeNode * temp=root->left;
        root->left=root->right;
        root->right=temp;
        
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return root;
        leftright(root);
        return root;
        
        
    }
};
