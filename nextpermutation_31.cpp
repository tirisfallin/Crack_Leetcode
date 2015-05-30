class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.empty())
            return ;
        int n=nums.size()-1;
        int temp;
        int i=n-1;
        int i2=n;
        while(i>=0&&nums[i]>=nums[i+1])
        {
            i--;
        }
        if(i==-1){
            for(i=0;i<=n/2;i++)
            {
                temp=nums[i];
                nums[i]=nums[n-i];
                nums[n-i]=temp;
            }
        }
        else{
            for(i2=n;i2>=i+1;i2--)
                if(nums[i2]>nums[i])
                    break;
            temp=nums[i2];
            nums[i2]=nums[i];
            nums[i]=temp;
            for(i2=1;i2<=(n-i)/2;i2++)
            {
                temp=nums[i+i2];
                nums[i+i2]=nums[n+1-i2];
                nums[n+1-i2]=temp;
            }
        }
        
    }
};
