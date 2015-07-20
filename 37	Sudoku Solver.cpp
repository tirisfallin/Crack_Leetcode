class Solution {
public:
    bool nineisvalid(int x1,int x2,int y1,int y2,vector<vector<char>>& board){
        bool x[10];
        for(int i=1;i<10;i++)
            x[i]=false;
        for(int i1=x1;i1<x2;i1++)
            for(int i2=y1;i2<y2;i2++)
            {   if(board[i1][i2]!='.'){
                if(x[board[i1][i2]-'0'])
                    return false;
                else
                    x[board[i1][i2]-'0']=true;
            }
            }
        return true;
    }
    
    bool check(vector<vector<char>>& board,int position) {
        int row=position/9;
        int col=position%9;
        if(nineisvalid(row, row+1, 0, 9, board)==false)
                return false;
        if(nineisvalid(0, 9, col, col+1, board)==false)
                return false;
        if(nineisvalid(row/3*3, row/3*3+3, col/3*3, col/3*3+3, board)==false)
                return false;
        return true;
        
    }
    
    bool solveSudoku(vector<vector<char>>& board,int position){
        if(position==81)
            return true;
        int row=position/9;
        int col=position%9;
        if(board[row][col]!='.'){
             if(solveSudoku(board, position+1))
                 return true;
        }
        else
            for(int i=1;i<=9;i++)
            {
                board[row][col]=i+'0';
                if(check(board,position))
                    if(solveSudoku(board, position+1))
                        return true;
                board[row][col]='.';
            }
        return false;
        
    }
    void solveSudoku(vector<vector<char>>& board) {
        solveSudoku(board, 0);
    }
};
