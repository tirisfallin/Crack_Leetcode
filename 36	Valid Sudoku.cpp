class Solution {
public:
    bool nineisvalid(vector<char>& nine){
        bool x[10];
        for(int i=1;i<10;i++)
            x[i]=false;
        for(int i=0;i<nine.size();i++)
        {   if(nine[i]!='.'){
            if(x[nine[i]-'0'])
                return false;
            else
                x[nine[i]-'0']=true;
        }
        }
        return true;
        
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> temp;
        for(int i=0;i<9;i++)
            if(!nineisvalid(board[i]))
                return false;
        for(int i1=0;i1<9;i1++){
            for(int i2=0;i2<9;i2++)
                temp.push_back(board[i2][i1]);
            if(!nineisvalid(temp))
                return false;
            temp.clear();
        }
        for(int row=0;row<3;row++)
            for(int col=0;col<3;col++){
                for(int i1=3*row;i1<3*row+3;i1++)
                    for(int i2=3*col;i2<3*col+3;i2++)
                            temp.push_back(board[i1][i2]);
                    if(!nineisvalid(temp))
                        return false;
                    temp.clear();
                }
        return true;
        
    }
};

