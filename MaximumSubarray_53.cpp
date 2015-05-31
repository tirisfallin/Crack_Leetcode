class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())
            return 0;
        vector<int> sums;
        sums.push_back(0);
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            sums.push_back(sum);
        }
        
        int subsum=INT_MIN,_min=INT_MAX ;
        for(int i=0;i<sums.size()-1;i++){
            _min=min(_min,sums[i]);
            subsum=max(subsum,sums[i+1]-_min);
            
        }
        return subsum;
    }
};
