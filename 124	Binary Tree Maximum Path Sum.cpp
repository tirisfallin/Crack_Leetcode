class Solution {
public:
    int maxPathSum(TreeNode* root,int & m){
        if(!root)
            return 0;
        int l=maxPathSum(root->left,m),r=maxPathSum(root->right,m);
        int lorr=max(l,r); //path go through either left of right
        int cmax=max(lorr,l+r)+root->val;
        m=max(cmax,m);
        m=max(m,root->val); //wether the path is one node
        return max(lorr,0)+root->val;
        
    }
    int maxPathSum(TreeNode* root) {
        if(!root)
            return 0;
        int m=INT_MIN;
        maxPathSum(root,m);
        return m;
        
    }
};
