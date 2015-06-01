class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty())
            return false;
        int rowNum=matrix.size()-1,colNum=matrix[0].size()-1;
        int col,row;
        int begin,end,mid;
        if(target<matrix[0][0]||target>matrix[rowNum][colNum])
            return false;
        
        if(target<=matrix[rowNum][colNum]&&target>=matrix[rowNum][0])
            row=rowNum;
        else{
            begin=0;end=rowNum-1;
            mid=(end+begin)/2;
            while(begin<=end&&matrix[mid][0]!=target){
                if(target>matrix[mid][0])
                    begin=mid+1;
                else if(target<matrix[mid][0])
                    end=mid-1;
                mid=(end+begin)/2;
            }
            if(matrix[mid][0]==target)
                return true;
            
            row=mid;
            if(matrix[row][0]>target)
                row--;
        }
            begin=0;end=colNum;
            mid=(end+begin)/2;
            while(begin<=end&&matrix[row][mid]!=target){
                if(target>matrix[row][mid])
                    begin=mid+1;
                else if(target<matrix[row][mid])
                    end=mid-1;
                mid=(end+begin)/2;
            }
            if(matrix[row][mid]==target)
                return true;
        
        return false;
        
    }
};
