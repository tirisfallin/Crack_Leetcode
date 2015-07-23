class Solution {
public:
    
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ret;
        if(s.size()<10)
            return ret;

        unordered_map<string, int>m;
        string temp;
        for(int i=0;i<=s.size()-10;i++){
            if(s[i]=='A'){
            temp=s.substr(i,10);
            m[temp]++;
            if(m[temp]==2)
                ret.push_back(temp);
            }
        }
        m.clear();
        for(int i=0;i<=s.size()-10;i++){
            if(s[i]=='G'){
                temp=s.substr(i,10);
                m[temp]++;
                if(m[temp]==2)
                    ret.push_back(temp);
            }
        }
        m.clear();
        for(int i=0;i<=s.size()-10;i++){
            if(s[i]=='C'){
                temp=s.substr(i,10);
                m[temp]++;
                if(m[temp]==2)
                    ret.push_back(temp);
            }
        }
        m.clear();
        for(int i=0;i<=s.size()-10;i++){
            if(s[i]=='T'){
                temp=s.substr(i,10);
                m[temp]++;
                if(m[temp]==2)
                    ret.push_back(temp);
            }
        }
        m.clear();
        return ret;
        
    }
};
