class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
            return 0;
        int i=s.size()-1,num=0;
        while(s[i]==' ')
            i--;
        while(i>=0&&s[i]!=' ')
            i--,num++;
        return num;
        
    }
};
