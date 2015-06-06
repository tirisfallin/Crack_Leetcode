class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==0)
            return 1;
        int n=nums.size();
        vector<bool> record(n+1,false);
        int horizon=INT_MAX;
        for(int i=0;i<n;i++)
            if(nums[i]<horizon&&nums[i]>0)
                horizon=nums[i];
        if(horizon>1||horizon==INT_MAX)
            return 1;
        int pointer=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                record[nums[i]-horizon]=true;
                if(!pointer)
                pointer=nums[i];
    
            
            if(!record[nums[i]-horizon+1]&&(nums[i]<pointer||record[pointer-horizon+1]))
                pointer=nums[i];
            }
            
        }
        pointer=0;
        while(pointer<n&&record[pointer])
            pointer++;
        return pointer+horizon;
               
    }
};
