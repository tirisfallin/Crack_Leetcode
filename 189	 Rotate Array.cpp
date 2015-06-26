class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty())
            return ;
        int temp;
        reverse(nums.begin(),nums.end());
        _reverse(nums,0,k%nums.size()-1);
        _reverse(nums,k%nums.size(),nums.size()-1);
    }
    void _reverse(vector<int>& nums,int begin,int end){
        int temp;
        while(begin<end){
            temp=nums[begin];
            nums[begin]=nums[end];
            nums[end]=temp;
            end--;
            begin++;
        }
        
    }
};
