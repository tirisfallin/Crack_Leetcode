class Solution {
public:
        int countNodes(TreeNode* root) {
        if(!root)
            return 0;
        TreeNode *l=root,*r=root;
        int hl=0,hr=0;
        while(l){
            l=l->left;
            hl++;
        }
        while(r){
            r=r->right;
            hr++;
        }
        if(hr==hl) return pow(2,hr)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
