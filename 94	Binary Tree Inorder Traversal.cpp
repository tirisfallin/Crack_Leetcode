class Solution {
public:
    void inorder(TreeNode* root,vector<int>& record){
        if(root->left)
            inorder(root->left,record);
        record.push_back(root->val);
        if(root->right)
            inorder(root->right,record);
        
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(!root)
            return ret;
        inorder(root,ret);
        return ret;
    }
};
