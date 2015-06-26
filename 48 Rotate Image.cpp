class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.empty()||matrix[0].empty())
            return ;
        reverse(matrix.begin(),matrix.end());
        for(int i1=0;i1<matrix.size();i1++)
            for(int i2=0;i2<=i1;i2++)
        swap(matrix[i1][i2],matrix[i2][i1]);
    }
    
};
