class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> temp1, temp2;
		int i = 0;
		while (i <= rowIndex){
			temp1 = vector<int>(i + 1, 0);
			temp1[0] = 1;
			temp1[i] = 1;
			if (i >= 2)
				for (int t = 1; t <= i - 1; t++){
				temp1[t] = temp2[t - 1] + temp2[t];
				}
			i++;
			temp2 = temp1;

		}
		return temp2;
	}
};
