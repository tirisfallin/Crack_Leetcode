class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> ret{};
        if(!root)
            return ret;
        vector<TreeNode *>record,newrecord;
        vector<int> nums;
        nums.push_back(root->val);
        record.push_back(root);
        bool flag=true;
        while(!record.empty()){
            newrecord.clear();
            ret.push_back(nums);
            if(flag){
                nums=rightzag(record,newrecord);
            }
            else{
                nums=leftzag(record,newrecord);
            }
            record=newrecord;
            flag=!flag;
            
        }
        
        return ret;
        
    }
    vector<int> leftzag(vector<TreeNode *> record,vector<TreeNode *>& newrecord){
        vector<int> ret;
        vector<TreeNode *>::iterator it;
        for(int i=record.size()-1;i>=0;i--){
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
    
    vector<int> rightzag(vector<TreeNode *> record,vector<TreeNode *>&newrecord){
        vector<int> ret;
        vector<TreeNode *>::iterator it;
        for(int i=record.size()-1;i>=0;i--){
            if(record[i]->right){
                ret.push_back(record[i]->right->val);
                newrecord.push_back(record[i]->right);
            }
            if(record[i]->left){
                ret.push_back(record[i]->left->val);
                newrecord.push_back(record[i]->left);
            }
        }
        return ret;
    }
    
};
