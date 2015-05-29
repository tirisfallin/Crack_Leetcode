class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>::size_type row_num,col_num;
        vector<int>::size_type i1=0,i2=0;
        vector<int>::size_type row_count=0,col_count=0;
        row_num =matrix.size();
        if(row_num>0)
            col_num=matrix[0].size();
        else
            return ;
        vector<bool> row(row_num,false);
        vector<bool> col(col_num,false);
        if(row_num>=col_num)
        while(i1<row_num&&col_count<col_num&&row_count<row_num){
                if(matrix[i1][i2]==0){
                    if(row[i1]!=true){
                        row[i1]=true;
                        row_count++;
                    }
                    if(col[i2]!=true){
                    col[i2]=true;
                    col_count++;
                    }
                }
            i2++;
            if(i2==col_num){
                i2=0;
                i1++;
            }
        }
        else
            while(i2<col_num&&col_count<col_num&&row_count<row_num){
                if(matrix[i1][i2]==0){
                    if(row[i1]!=true){
                        row[i1]=true;
                        row_count++;
                    }
                    if(col[i2]!=true){
                        col[i2]=true;
                        col_count++;
                    }
                }
                i1++;
                if(i1==row_num){
                    i1=0;
                    i2++;
                }
            }
        for(i1=0;i1<row_num;i1++)
            if(row[i1])
                for(i2=0;i2<col_num;i2++)
                    matrix[i1][i2]=0;
        
        for(i2=0;i2<col_num;i2++)
            if(col[i2])
                for(i1=0;i1<row_num;i1++)
                    matrix[i1][i2]=0;
        
    }
};
