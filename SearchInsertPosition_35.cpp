class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty())
            return 0;
        int low=0,high=nums.size()-1;
        int middle=(low+high)/2;
        while(low<high){
            if(nums[middle]==target)
                return middle;
            if(nums[middle]<target)
                low=middle+1;
            else
                high=middle-1;
            middle=(low+high)/2;
        }
        if(nums[middle]>=target)
            return middle;
        else
            return middle+1;
        
        
    }
};
