class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root)
            return ;
        if(root->left&&root->right)
            root->left->next=root->right;
        if(root->next&&root->next->left)
            root->right->next=root->next->left;
        if(root->left)
            connect(root->left);
        if(root->right)
            connect(root->right);

    }
};
