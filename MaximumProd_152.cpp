class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int maxProd=nums[0],p=1;
        for(int i=0;i<nums.size();i++)
        {
            p=p*nums[i];
            maxProd=max(maxProd,p);
            if(nums[i]==0)
                p=1;
            
        }
        p=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            p=p*nums[i];
            maxProd=max(maxProd,p);
            if(nums[i]==0)
                p=1;
        }
        return maxProd;
        
    }
    
};
