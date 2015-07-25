class Solution {
public:

    string shortestPalindrome(string s) {
        string ret;
        string rev_s=s;
        reverse(rev_s.begin(),rev_s.end());
        string l=s+'+'+rev_s;
        vector<int> next(l.size(),0);
        int k=0;
        for(int i=1;i<l.size();i++){
            while(k!=0&&s[k]!=l[i]){
                k=next[k-1];
            }
            if(l[k]==l[i])
                k++;
            next[i]=k;
        }
        return rev_s.substr(0,rev_s.size()-next[next.size()-1])+s;
    }
   
    vector<int> nextfunc(string s){
        vector<int> next(s.size(),0);
        int k=0;
        for(int i=1;i<s.size();i++){
            while(k!=0&&s[k]!=s[i]){
                k=next[k-1];
            }
            if(s[k]==s[i])
                k++;
            next[i]=k;
        }
        return next;
    }
};
