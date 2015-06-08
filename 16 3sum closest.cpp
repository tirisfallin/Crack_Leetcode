
 
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int left,right;
        int _min=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            left=i+1;
            right=nums.size()-1;
 
            while(left<right){
                if(nums[left]+nums[right]+nums[i]==target)
                    return target;
                else{
                    while(nums[left]+nums[right]+nums[i]<target&&left<right){
                        if(abs(target-(nums[left]+nums[right]+nums[i]))<abs(target-_min))
                           _min=nums[left]+nums[right]+nums[i];
                        left++;
                    }
                    while(nums[left]+nums[right]+nums[i]>target&&left<right){
                        if(abs(target-(nums[left]+nums[right]+nums[i]))<abs(target-_min))
                            _min=nums[left]+nums[right]+nums[i];
                        right--;
                    }
                }
            }
        }
        return _min;
    }
};
