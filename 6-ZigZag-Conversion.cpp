class Solution {
public:
    string convert(string s, int numRows) {
        string ret;
        if(s.empty()||numRows==1)
            return s;
        vector<vector<char>> v;
        for(int i=0;i<numRows;i++)
            v.push_back(vector<char>{});
        int i=0;
        int direction=1;
        for(auto t:s){
            v[i].push_back(t);
            i=i+direction;
            if(i==numRows-1||i==0)
               direction=-direction;
            
        }
        for(auto vt:v)
            for(char t:vt){
                ret=ret+t;
            }
        return ret;
    }
};
