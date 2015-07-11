class Solution {
 public:
    
    void getSum(TreeNode* root,int sum,vector<int> ret,vector<vector<int>>& mainret){
        if(!root)
            return ;
        ret.push_back(root->val);
        if(!root->left&&!root->right&&root->val==sum){
            mainret.push_back(ret);
        }
        else{
        getSum(root->left,sum-root->val,ret,mainret);
        getSum(root->right,sum-root->val,ret,mainret);
        }
        
    }
    
     vector<vector<int>> pathSum(TreeNode* root, int sum) {
         vector<vector<int>> mainret;
         vector<int>ret;
         getSum(root, sum, ret, mainret);
         return mainret;
         
     }
 };
