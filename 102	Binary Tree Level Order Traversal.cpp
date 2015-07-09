class Solution {
public:
    vector<int> leftzag(vector<TreeNode *> record,vector<TreeNode *>& newrecord){
        vector<int> ret;
        vector<TreeNode *>::iterator it;
        for(int i=0;i<record.size();i++){
            if(record[i]->left){
                ret.push_back(record[i]->left->val);
                newrecord.push_back(record[i]->left);
            }
            if(record[i]->right){
                ret.push_back(record[i]->right->val);
                newrecord.push_back(record[i]->right);
            }
            
        }        return ret;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret{};
        if(!root)
            return ret;
        vector<TreeNode *>record,newrecord;
        vector<int> nums;
        nums.push_back(root->val);
        record.push_back(root);
        while(!record.empty()){
            newrecord.clear();
            ret.push_back(nums);
            nums=leftzag(record,newrecord);
            record=newrecord;
        }
        return ret;

        
        
    }
};
