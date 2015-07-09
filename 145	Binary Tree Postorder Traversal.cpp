class Solution {
public:
    void postorder(TreeNode* root,vector<int>& record){
        if(root->left)
            postorder(root->left,record);
        if(root->right)
            postorder(root->right,record);
         record.push_back(root->val);
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(!root)
            return ret;
        postorder(root,ret);
        return ret;
    }
};
