class Solution {
public:
       int minSubArrayLen(int s, vector<int>& nums) {
           if(nums.empty())
               return 0;
           vector<int> sum;
           sum.push_back(0);
           int i=0,n=nums.size();
           int count=INT_MAX,counttemp=INT_MAX;
           int t=0;
           for(i=0;i<n;i++)
           {
               t=t+nums[i];
               sum.push_back(t);
           }
           for(i=1;i<nums.size()+1;i++)
           {
               int l=i-1;
               while(l>=0){
               if(sum[i]-sum[l]>=s){
                   counttemp=i-l;
                   break;
               }
                   l--;
               }
               count=min(count,counttemp);
              
           }
        return count == INT_MAX ? 0 : count;
           
    }
};
