class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.empty())
            return false;
        int loc=0,temp=-1,i;
        while(true){
            if(loc+nums[loc]>=nums.size()-1)
                return true;
            temp=loc;
            for(i=1;i<=nums[loc];i++){
                if(temp+nums[temp]<=nums[loc+i]+loc+i)
                    temp=loc+i;
            }
            if(temp==loc)
                return false;
            loc=temp;
    }
        
        
    }
};
