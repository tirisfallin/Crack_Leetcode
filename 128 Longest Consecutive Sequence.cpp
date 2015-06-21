class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        int low,high;
        int ret=0;
        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i]))
                continue;
            low=nums[i];
            high=nums[i];
            if(m.count(nums[i]-1)){
                low=m[nums[i]-1];
            }
            if(m.count(nums[i]+1)){
                high=m[nums[i]+1];
            }
            ret=max(ret,high-low+1);
            m[nums[i]]=nums[i];
            m[low]=high;
            m[high]=low;
        }
        return ret;
        
    }
};
