class Solution {
public:
    vector<int>::size_type search(vector<int>& v,int target,vector<int>::size_type begin,vector<int>::size_type end){
        vector<int>::size_type i=begin;
        while(i<end&&v[i]!=target)
            i++;
        return i;

    }
    TreeNode* constructTree(vector<int>& preorder, vector<int>& inorder,
                            vector<int>::size_type pbegin,
                            vector<int>::size_type ibegin,vector<int>::size_type iend){
        if(iend-ibegin>0){
            TreeNode *t=new TreeNode(0);
            vector<int>::size_type flag;
            flag=search(inorder, preorder[pbegin],ibegin,iend);
            t->val=inorder[flag];
            t->left=constructTree(preorder, inorder,pbegin+1,ibegin,flag);
            t->right=constructTree(preorder, inorder,pbegin+1+flag-ibegin,flag+1,iend);
            return t;
        }
        return NULL;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *t=new TreeNode(0);
        t=constructTree(preorder, inorder, 0, 0, inorder.size());
        return t;
        
    }
};
