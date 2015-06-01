class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
            return 0;
        int low=0,high=nums.size()-1;
        vector<int>::iterator del=nums.begin();
        int temp;
        while(low<high){
            while(nums[low]!=val&&low<high)
                low++;
            while(nums[high]==val&&low<high)
                high--;
            if(low<high){
                temp=nums[low];
                nums[low]=nums[high];
                nums[high]=temp;
            }
            
        }
        del=del+low;
        if(nums[nums.size()-1]==val)
        nums.erase(del,nums.end());
        return nums.size();
        
    }
};
