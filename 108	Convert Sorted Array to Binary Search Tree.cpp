class Solution {
public:
    TreeNode * sortedLIstToBST(const vector<int>& nums,int begin,int end){
        if(begin==end)
            return NULL;
        if(begin+1==end){
            TreeNode *ret=new TreeNode(nums[begin]);
            return ret;
        }
        int middle=(end+begin)/2;
        TreeNode *ret=new TreeNode(nums[middle]);
        ret->left=sortedLIstToBST(nums,begin, middle);
        ret->right=sortedLIstToBST(nums,middle+1, end);
        return ret;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        TreeNode * ret=sortedLIstToBST(nums,0,nums.size());
        return ret;
    }
};
