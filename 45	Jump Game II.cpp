class Solution {
public:
    int jump(vector<int>& nums) {
        int times=0;
        if(nums.empty())
            return false;
        int loc=0,temp=-1,i;
        while(true){
            if(loc+nums[loc]>=nums.size()-1)
                if(loc==nums.size()-1)
                return times;
                else
                return times+1;
            temp=loc;
            for(i=1;i<=nums[loc];i++){
                if(temp+nums[temp]<=nums[loc+i]+loc+i)
                    temp=loc+i;
            }
            if(temp==loc)
                return false;
            loc=temp;
            times++;
        }
        
    }
};
