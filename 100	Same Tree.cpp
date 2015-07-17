class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool left=true,right=true;
        if((p&&!q)||(!p&&q))
            return false;
        if(!p&&!q)
            return true;
        if(p->val!=q->val)
            return false;
        left=isSameTree(p->left, q->left);
        right=isSameTree(p->right, q->right);
        return left&&right;
    }
};
