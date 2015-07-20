class Solution {
    int allsum=0;
public:
    void sumhelper(TreeNode* root,int sum){
        int tempsum=sum*10+root->val;
        if(!root->left&&!root->right)
            allsum+=tempsum;
        if(root->left)
            sumhelper(root->left, tempsum);
        if(root->right)
            sumhelper(root->right, tempsum);
    }
    
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
        sumhelper(root, 0);
        return allsum;
    }
};
