class Solution {
public:
    bool isIsomorphic2(string s, string t) {
        vector<bool> v;
        int temp;
        for(int i=0;i<s.size();i++)
            v.push_back(false);
        for(int i1=0;i1<s.size();i1++){
            if(v[i1])
                continue;
            v[i1]=true;
            temp=s[i1]-t[i1];
            for(int i2=i1+1;i2<s.size();i2++){
                if(v[i2])
                    continue;
                if(s[i2]==s[i1]){
                    v[i2]=true;
                    if(s[i2]-t[i2]!=temp)
                        return false;
                }
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        if(isIsomorphic2(s,t)&&isIsomorphic2(t, s))
            return true;
        return false;
        
    }
};
