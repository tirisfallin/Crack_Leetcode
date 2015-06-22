class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.empty())
            return false;
        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high)
        {
            mid=(high+low)/2;
        if(nums[mid]==target)
            return true;
        if(nums[low]<nums[high])
        {
            if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        
        else{
            if(nums[mid]<nums[high]){
                if(nums[mid]<target&&target<=nums[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
            else if(nums[mid]>nums[high]){ //loop is after mid
                if(nums[low]<=target&&target<nums[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
            else{//nums[mid]==nums[high]
                if(nums[mid]!=nums[low])
                    high=mid-1;
                else{
                high--;
                low++;
                }
            }
        }
        }
        return false;
        
        
    }
};
