public class Solution {
    public int findPeakElement(int[] nums) {
        int n=nums.length;
		if(n==1)
			return 0;
		int i=0;
		while(true){
			while(i<=n-2&&nums[i]<nums[i+1])
				i++;
			if(i==n-1||nums[i]>nums[i+1])
				return i;
		}
        
    }
}
