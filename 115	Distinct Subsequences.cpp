class Solution {
public:
    int numDistinct(string s, string t) {
        if(t.empty())
            return 1;
        if(s.empty())
            return 0;
        vector<int> m(t.size()+1,0);
        m[0]=1;
        for(int i=1;i<=s.size();i++)
            for(int j=t.size();j>0;j--){
            if(s[i-1]==t[j-1])
                m[j]+=m[j-1];
            }
        return m[t.size()];
        
    }
};
