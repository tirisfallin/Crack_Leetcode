class Solution {
public:
    TreeNode * first=NULL;
    TreeNode * second=NULL;
    TreeNode * prev=new TreeNode(INT_MIN);
    void traverse(TreeNode * root){
        if(!root)
            return ;
        traverse(root->left);
        if(first==NULL&&prev->val>root->val){
            first=prev;
        }
        if(first!=NULL&&prev->val>root->val){
            second=root;
        }
        prev=root;
        traverse(root->right);
    }
    void recoverTree(TreeNode* root) {
        if(!root)
            return ;
        traverse(root);
        if(first){
        int temp=first->val;
        first->val=second->val;
        second->val=temp;
        }
        
    }
};
