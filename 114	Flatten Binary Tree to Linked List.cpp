class Solution {
public:
    void flatten(TreeNode* root){
        if(!root||(!root->left&&!root->right))
        return ;
        TreeNode * ret=new TreeNode(0);
        preorder(root,ret);
        root->left=NULL;
        root->right=ret->right->right;
        
    }
    void preorder(TreeNode* root,TreeNode* ret){
        ret->right=new TreeNode(root->val);
        TreeNode * temp;
        if(root->left)
            preorder(root->left,ret->right);
        if(root->right){
            temp=ret->right;
            while(temp->right)
                temp=temp->right;
            preorder(root->right,temp);
        }
        
    }
};
