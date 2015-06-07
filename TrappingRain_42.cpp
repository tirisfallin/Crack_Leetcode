class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<2)
            return 0;
        int left=0,n=height.size(),right=height.size()-1;
        int sum=0,temp=0;
        for(int i=1;i<n-1;i++){
            if(height[i]<height[left])
                temp=temp+(height[left]-height[i]);
            else {
                left=i;
                sum+=temp;
                temp=0;
            }
        }
        if(height[n-1]>=height[left]){
            sum+=temp;
        }
        else{
            temp=0;
            for(int i=height.size()-2;i>left;i--){
                if(height[i]<height[right])
                    temp=temp+(height[right]-height[i]);
                else {
                    right=i;
                    sum+=temp;
                    temp=0;
                }
            }
            sum+=temp;
        }
        return sum;
    }
};
