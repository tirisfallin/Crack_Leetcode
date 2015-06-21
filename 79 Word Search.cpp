class Solution {
public:
    void existloop(vector<vector<char>> &board,vector<vector<bool>> trace,pair<int,int> focus,int begin,string & word,bool & ret){
        begin++;
        if(begin==word.size())
        {
            ret=true;
            return ;
        }
        trace[focus.first][focus.second]=true;
        if(!ret&&(focus.first+1<board.size())
           &&(!trace[focus.first+1][focus.second])
           &&word[begin]==board[focus.first+1][focus.second])
            existloop(board,trace,pair<int,int>{focus.first+1,focus.second},begin,word,ret);
        if(!ret&&(focus.second+1<board[0].size())
           &&(!trace[focus.first][focus.second+1])
           &&word[begin]==board[focus.first][focus.second+1])
            existloop(board,trace,pair<int,int>{focus.first,focus.second+1},begin,word,ret);
        if(!ret&&(focus.first-1>=0)
           &&(!trace[focus.first-1][focus.second])
           &&word[begin]==board[focus.first-1][focus.second])
            existloop(board,trace,pair<int,int>{focus.first-1,focus.second},begin,word,ret);
        if(!ret&&(focus.second-1>=0)
           &&(!trace[focus.first][focus.second-1])
           &&word[begin]==board[focus.first][focus.second-1])
            existloop(board,trace,pair<int,int>{focus.first,focus.second-1},begin,word,ret);

    }
    bool exist(vector<vector<char>>& board, string word) {
        bool ret=false;
        if(board.empty())
            return false;
        if(word.empty())
            return true;
        vector<vector<bool>> trace(board.size(),vector<bool>(board[0].size(),false));
        for(int i1=0;i1<board.size();i1++){
            for(int i2=0;i2<board[0].size();i2++)
                if(board[i1][i2]==word[0])
                    existloop(board,trace,pair<int,int>{i1,i2},0,word,ret);
            if(ret)
                return true;
        }
        return false;
    }
};
