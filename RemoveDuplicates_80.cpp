class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()<2)
            return nums.size();
        int i=1,j=1,count=1;
        while(j<n){
            if(nums[j]!=nums[j-1]){
                nums[i++]=nums[j];
                count=1;
            }
            else{
                if(count==1){
                nums[i++]=nums[j];
                count++;
                }
            }
            j++;
        }
        return i;
    }
};
