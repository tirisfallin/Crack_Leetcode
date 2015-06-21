class Solution {
public:
    int biosearch(vector<int> & nums,int target,int low,int high){
        int ret;
        if(low>high)
            return -1;
        int mid=(high+low)/2;
        if(nums[mid]==target)
            return mid;
        if(nums[low]<=nums[high])
        {
            if(nums[mid]<target)
            ret=biosearch(nums,target,mid+1,high);
            else
            ret=biosearch(nums,target,low,mid-1);
        }
        else{
            if(nums[low]<=nums[mid])
            {if(nums[low]<=target&&target<nums[mid])
                    ret=biosearch(nums,target,low,mid-1);
                else
                     ret=biosearch(nums,target,mid+1,high);
            }
            else{
                if(nums[mid]<target&&target<=nums[high])
                     ret=biosearch(nums,target,mid+1,high);
                else
                ret=biosearch(nums,target,low,mid-1);
            }
        }
        
        return ret;
}
    
    int search(vector<int>& nums, int target) {
        int i=-1;
        if(nums.empty())
            return i;

        i=biosearch(nums,target,0,nums.size()-1);

        return i;
        
    }
};
