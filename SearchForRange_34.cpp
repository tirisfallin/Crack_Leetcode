class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int points;
        vector<int> re;
        int t;
        int begin =0,end=nums.size()-1,mid=(end+begin)/2;
        while(begin<=end&&nums[mid]!=target){
            if(target>nums[mid])
                begin=mid+1;
            else if(target<nums[mid])
                end=mid-1;
            mid=(end+begin)/2;
        }
        t=mid;
        if(nums[mid]==target){
        while(t>=0&&nums[t]==target)
            t--;
            re.push_back(t+1);
            t=mid;
        while(t<nums.size()&&nums[t]==target)
            t++;
        re.push_back(t-1);
        }
        else{
            re.push_back(-1);
            re.push_back(-1);
        }
        return re;
    }
    
};
