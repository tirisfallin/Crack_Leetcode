class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret{};
        vector<int> nums;
        if(!root)
            return ret;
        deque<TreeNode *> d;
        d.push_back(root);
        d.push_back(NULL);
        while(!d.empty()){
            TreeNode *t=d.front();
            d.pop_front();
            if(t==NULL){
                ret.push_back(nums);
                nums.clear();
                if(!d.empty())
                    d.push_back(NULL);
            }
            else{
                nums.push_back(t->val);
                if(t->left) d.push_back(t->left);
                if(t->right) d.push_back(t->right);
                
            }
        }
        vector<vector<int>> ret1;
        for(int i=ret.size()-1;i>=0;i--)
            ret1.push_back(ret[i]);
        return ret1;
        
        
    }
};
