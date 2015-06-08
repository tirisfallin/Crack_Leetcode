
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<=2)
            return res;
        sort(nums.begin(),nums.end());
        int twosum;
        int left,right;
        for(int i=0;i<nums.size()-2;i++){
            twosum=0-nums[i];
            left=i+1;
            right=nums.size()-1;
            while(left<right){
                if(nums[left]+nums[right]==twosum)
                {
                res.push_back(vector<int>{nums[i],nums[left],nums[right]});
                if(nums[left+1]!=nums[left])
                left++;
                else{
                while(nums[left+1]==nums[left]&&left<right)
                    left++;
                    left++;
                }
                while(nums[right-1]==nums[right]&&left<right)
                    right--;
                }
                else{
                while(nums[left]+nums[right]<twosum&&left<right)
                    left++;
                while(nums[left]+nums[right]>twosum&&left<right)
                    right--;
                }
            }
            while(nums[i+1]==nums[i])
                i++;
        }
        return res;
        
    }
};
