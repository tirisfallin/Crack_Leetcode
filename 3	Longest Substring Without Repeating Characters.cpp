class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int begin=0,length=0;
        unordered_map<char,int>::iterator it;
        for(int i=0;i<s.length();i++){
            it=m.find(s[i]);
            if(it==m.end())
                m[s[i]]=i;
            else{
                begin=max(begin,it->second+1);
                it->second=i;
            }
            length=max(length,i-begin+1);
        }
        return length;
    }
};
