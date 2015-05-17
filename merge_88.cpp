class Solution {
public:
	void static merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		vector<int> nums3;
		int i1 = 0, i2 = 0;
		while (i1 < m&&i2 < n)
		{
			if (nums1[i1] < nums2[i2])
				nums3.push_back(nums1[i1++]);
			else
				nums3.push_back(nums2[i2++]);
		}
		if (i1<m)
			while (i1<m)
			nums3.push_back(nums1[i1++]);
		else
			while (i2<n)
			nums3.push_back(nums2[i2++]);
		nums1 = nums3;
	}
};
