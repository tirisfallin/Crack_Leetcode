class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<bool>> judge;
        vector<int> ret;
        if(matrix.size()==0||matrix[0].size()==0)
            return ret;
        
        int col1=0,row1=0;
        int COL=matrix[0].size(),ROW=matrix.size();
        vector<bool> judgetemp(COL,true);
        for(int i=0;i<ROW;i++)
            judge.push_back(judgetemp);
        bool change=true;

        ret.push_back(matrix[0][0]);
        judge[0][0]=false;
        while(change){
            change=false;
            while(col1<COL-1&&judge[row1][col1+1]==true){//not in the last one
                ret.push_back(matrix[row1][++col1]);
                judge[row1][col1]=false;
                change=true;
            }
            while(row1<ROW-1&&judge[row1+1][col1]==true){
                ret.push_back(matrix[++row1][col1]);
                judge[row1][col1]=false;
                change=true;
            }
            while(col1>0&&judge[row1][col1-1]==true){//not in the first col
                ret.push_back(matrix[row1][--col1]);
                judge[row1][col1]=false;
                change=true;
            }
            while(row1>0&&judge[row1-1][col1]==true){
                ret.push_back(matrix[--row1][col1]);
                judge[row1][col1]=false;
                change=true;
            }
        }
        return ret;
        
    }
};
