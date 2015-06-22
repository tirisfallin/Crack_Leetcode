class Solution {
public:
 /*   void sort(vector<int>&num,vector<int>&order,int low,int high){
        if(low<high){
        int pivot=low;
        int left=low+1,right=high;
        int temp,temp1;
        while(left<right){
            while(left<right&&num[left]<=num[pivot])
                left++;
            while(left<right&&num[right]>=num[pivot])
                right--;
            if(left<right){
                temp=num[left];
                num[left]=num[right];
                num[right]=temp;
                
                temp1=order[left];
                order[left]=order[right];
                order[right]=temp1;

            }
        }
        while(num[left]>num[pivot]&&left>low)
            left--;
        if(left!=pivot)
        {
            temp=num[left];
            num[left]=num[pivot];
            num[pivot]=temp;
            
            temp1=order[left];
            order[left]=order[pivot];
            order[pivot]=temp1;
        }
        sort(num,order,low,left-1);
        sort(num,order,left+1,high);
        }
        
    }
  */
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int t_right,t_left;
        vector<int> ret;
        bool flag=true;

        while(left<right&&flag){
            while(nums[right]>target&&target>0)//the key is to judge whether target is great than 0 or not
                right--;
            while(nums[left]>target&&target>0)
                left++;
            t_left=left;
        while(t_left<right&&flag)
        if(nums[right]+nums[t_left++]==target){
            ret.push_back(t_left);
            ret.push_back(right+1);
            flag=false;
        }
            right--;
        }
        
        return ret;
        
    }
};
