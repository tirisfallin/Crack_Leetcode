class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> record;
        for(int i=0;i<nums.size();i++)
        {
            if(i>k)
                record.erase(nums[i-k-1]);
            if(!(record.insert(nums[i]).second))
                return true;
        }
        return false;
    }
};
