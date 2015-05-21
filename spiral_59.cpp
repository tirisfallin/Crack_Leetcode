class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ret;
        if(n<=0)
            return ret;
        vector<int>temp(n,-1);
        for(int i=0;i<n;i++)
        ret.push_back(temp);
        int num=2;
        int end=n*n;
        int row=0,col=0;
        ret[row][col]=1;
        while(num<=end){
            while(col<n-1&&ret[row][col+1]==-1){//not in the last one
                ret[row][++col]=num++;
            }
            while(row<n-1&&ret[row+1][col]==-1){
                 ret[++row][col]=num++;
            }
            while(col>0&&ret[row][col-1]==-1){//not in the first col
                 ret[row][--col]=num++;

            }
            while(row>0&&ret[row-1][col]==-1){
                ret[--row][col]=num++;

            }
        }
        return ret;
        
    }
};
