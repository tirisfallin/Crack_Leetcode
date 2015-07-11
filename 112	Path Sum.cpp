class Solution {
public:
    void getSum(TreeNode* root,int sum,bool& ret){
        if(ret)
            return;
        if(!root)
            return ;
        if(!root->left&&!root->right&&root->val==sum)
            ret=true;
        getSum(root->left,sum-root->val,ret);
        getSum(root->right,sum-root->val,ret);
        
}
    
    bool hasPathSum(TreeNode* root, int sum) {
        bool ret=false;
        getSum(root,sum, ret);
        return ret;
        
    }
};
