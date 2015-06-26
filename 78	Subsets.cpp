class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int total=exp(2,nums.size());
        vector<vector<int>> ret(total,vector<int>{});
        for(int i1=0;i1<=total;i1++)
            for(int i2=0;i2<nums.size();i2++)
                
            {
                               if((i1&exp(2,i2))==exp(2,i2))
                    ret[i1].push_back(nums[i2]);
            }
        return ret;
        
    }
    int exp(int p,int n){
        int mul=1;
        for(int i=0;i<n;i++)
            mul*=p;
        return mul;
    }
};
