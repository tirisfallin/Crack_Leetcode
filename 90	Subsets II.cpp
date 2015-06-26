class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ret{{}};
        int count=1;
        int previousN;
        vector<int> temp;
        for(int i=0;i<nums.size();){
            count=1;
            while(i+count<nums.size()&&nums[i]==nums[i+count])
                count++;
            previousN=ret.size();
            for(int i1=0;i1<previousN;i1++){
                temp=ret[i1];
                for(int i2=0;i2<count;i2++)
                {temp.push_back(nums[i]);
                ret.push_back(temp);
                }
            }
            i=i+count;
        }
        return ret;
        
    }
};
