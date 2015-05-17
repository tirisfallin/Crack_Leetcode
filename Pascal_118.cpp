class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> g;
		vector<int> temp;
		for (int i = 0; i < numRows;i++){
			temp = vector<int>(i+1,0);
			temp[0] = 1;
			temp[i] = 1;
			if (i >= 2)
			{
				for (int i2 = 1; i2 <= i - 1; i2++)
					temp[i2] = g[i - 1][i2] + g[i - 1][i2 -1];
			}
			g.push_back(temp);
		}
		return g;

	}
};
