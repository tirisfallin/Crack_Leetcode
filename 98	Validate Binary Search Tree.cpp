class Solution {
public:
    TreeNode * prev=NULL;
    void traverse(TreeNode * root,bool& flag){
        if(!flag||!root)
            return ;
        traverse(root->left,flag);
        if(prev&&prev->val>=root->val)
            flag=false;
        prev=root;
        traverse(root->right,flag);
    }
    bool isValidBST(TreeNode* root) {
        if(!root)
            return true;
        bool flag=true;
        traverse(root,flag);
        return flag;
        
    }
};
