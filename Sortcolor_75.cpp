class Solution {
public:
    void sortColors(vector<int>& nums) {
            vector<int>::size_type i=1;
            int temp;
        if(nums.size()==0)
            return ;
        vector<int> pointer(3,-1);
        for(int t=2;t>=nums[0];t--)
        {
            pointer[t]++;
        }
        while(i<nums.size()){
             temp=nums[i];
            if(nums[i]<nums[i-1]){
                for(int t=2;t>=temp;t--)
                {
                    nums[pointer[t]+1]=t;
                    pointer[t]++;
                }
            }
            else if(nums[i]>nums[i-1])
            {
                pointer[nums[i]]=i;
            }
            else{ //nums[i]==nums[i-1]
                for(int t=2;t>=temp;t--)
                {
                    pointer[t]++;
                }
            }
            i++;
        }
        
    }
};
