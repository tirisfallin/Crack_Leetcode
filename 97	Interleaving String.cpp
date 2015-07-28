class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size())
            return false;
        vector<vector<bool>> v(s1.size()+1, vector<bool>(s2.size()+1,false));
        for(int i1=0;i1<=s1.size();i1++)
            for(int i2=0;i2<=s2.size();i2++){
                if(i1==0&&i2==0)
                    v[i1][i2]=true;
                else if(i1==0)
                    v[i1][i2]=(v[i1][i2-1]&&s2[i2-1]==s3[i2-1]);
                else
                    if(i2==0)
                        v[i1][i2]=(v[i1-1][i2]&&s1[i1-1]==s3[i1-1]);
                else
                v[i1][i2]=(v[i1][i2-1]&&s2[i2-1]==s3[i1+i2-1])||(v[i1-1][i2]&&s1[i1-1]==s3[i1+i2-1]);
        
        }
        return v[s1.size()][s2.size()];
        return true;
    }
};
