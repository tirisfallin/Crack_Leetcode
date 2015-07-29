class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>> v(s.size()+1,vector<bool>(p.size()+1,false));
        for(int i1=0;i1<=s.size();i1++)
            for(int i2=0;i2<=p.size();i2++){
                if(i1==0&&i2==0)
                    v[i1][i2]=true;
                else if(i1==0){
                    if(i2>=2&&p[i2-1]=='*'&&v[i1][i2-2])
                        v[i1][i2]=true;
                }
                else if(i2==0){
                    if(i1>=2&&s[i1-1]=='*'&&v[i1-2][i2])
                        v[i1][i2]=true;
                }
                else{
                    if((s[i1-1]==p[i2-1]||s[i1-1]=='.'||p[i2-1]=='.')&&v[i1-1][i2-1])
                        v[i1][i2]=true;
                    else if(i1>=2&&s[i1-1]=='*'
                            &&(v[i1-2][i2]||    //不要*之前的
                               (v[i1-1][i2]&&(s[i1-2]==p[i2-1]||s[i1-2]=='.'||p[i2-1]=='.'))||//第一次出现，无视*
                               (v[i1][i2-1]&&i2>=2&&(p[i2-1]==s[i2-2]||p[i2-1]=='.'||s[i2-2]=='.')))) //重复之前
                        v[i1][i2]=true;
                    else if(i2>=2&&p[i2-1]=='*'
                            &&(v[i1][i2-2]|| //不要*之前的
                            (v[i1][i2-1]&&(p[i2-2]==s[i1-1]||p[i2-2]=='.'||s[i1-1]=='.'))|| //第一次出现，无视*
                               (v[i1-1][i2]&&i1>=2&&(s[i1-1]==p[i2-2]||s[i1-1]=='.'||p[i2-2]=='.')))) //重复之前
                        v[i1][i2]=true;
                }
            
            }
        return v[s.size()][p.size()];
        
    }
};
