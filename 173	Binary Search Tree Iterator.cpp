class BSTIterator {
public:

    BSTIterator(TreeNode *root) {
        saveleftnode(root);
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(!st.empty())
            return true;
        return false;
        
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode * minnode=st.top();
        st.pop();
        if(minnode->right){
            saveleftnode(minnode->right);
        }
        return minnode->val;
    }
    
private:
    TreeNode * head;
    stack<TreeNode*> st;
    void saveleftnode(TreeNode * root){
        TreeNode * minnode=root;
        while(minnode){
            st.push(minnode);
            minnode=minnode->left;
        }
        
    }
};
