class Solution {
public:
    void preorder(TreeNode* root,vector<int>& record){
        record.push_back(root->val);
        if(root->left)
            preorder(root->left,record);
        if(root->right)
            preorder(root->right,record);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> ret;
        if(!root)
            return ret;
        preorder(root,ret);
        return ret;
        
    }
};
