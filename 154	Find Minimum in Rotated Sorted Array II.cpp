class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int mid=0;
        while(low<=high){
            if(nums[low]<nums[high])
            {
                mid=low;
                break;
            }
            mid=(low+high)/2;
            if(nums[mid]>nums[low])
                low=mid+1;
            else if(nums[mid]<nums[low])
                high=mid;
            else{ //nums[mid]==nums[low]
                if(nums[mid]!=nums[high])
                    low=mid+1;
                else{
                    high--;
                    low++;
                }
                
            }
            
        }
        return nums[mid]<nums[(mid+1)%nums.size()]? nums[mid]:nums[(mid+1)%nums.size()];
    }
};
