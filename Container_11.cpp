class Solution {
public:
	int max(int i1, int i2){
		int i3;
		i1 > i2 ? i3= i1 : i3= i2;
		return i3;
	}
	int min(int i1, int i2){
		int i3;
		i1 < i2 ? i3 = i1 : i3 = i2;
		return i3;

	}
	int maxArea(vector<int>& height) {
		int i1 =0,i2=height.size()-1;
		int maxC;
		maxC = (i2 - i1)*min(height[i1] , height[i2]);
		while (i1 < i2){
			maxC = max(maxC, (i2 - i1)*min(height[i1] ,height[i2]));
			if (height[i1] < height[i2])
				i1++;
			else
				i2--;
		}
		return maxC;

	}
};
