class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<=1)
            return false;
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
                if(count==2)
                    return true;
            }
            else{
                count=1;
            }
        }
        return false;
    }
};
