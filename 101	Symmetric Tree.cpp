class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return helper(root->left,root->right);
        
        
    }
    bool helper(TreeNode * left,TreeNode* right){
        if((!left&&right)||(left&&!right))
            return false;
        if(!left&&!right)
            return true;
        if(left->val!=right->val)
            return false;
        return helper(left->left,right->right)&&helper(left->right,right->left);
    }
};
