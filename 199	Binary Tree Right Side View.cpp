class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ret;
        int num;
        if(!root)
            return ret;
        deque<TreeNode *> d;
        d.push_back(root);
        d.push_back(NULL);
        while(!d.empty()){
            TreeNode *t=d.front();
            d.pop_front();
            if(t==NULL){
                ret.push_back(num);
                if(!d.empty())
                    d.push_back(NULL);
            }
            else{
                num=t->val;
                if(t->left) d.push_back(t->left);
                if(t->right) d.push_back(t->right);
                
            }
        }
        return ret;
        
    }
};
