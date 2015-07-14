class Solution {
public:
    int s2num(char t){
        if(t<='z'&&t>='a')
            return t-'a';
        else
            if(t<='Z'&&t>='A')
            return t-'A';
        else
            return t-'0'+300;
    }
    bool isPalindrome(string s) {
        int i1=0,i2=s.size()-1;
        while(i1<=i2){
            while(i1<=i2&&(!((s[i1]<='Z'&&s[i1]>='A')||(s[i1]<='z'&&s[i1]>='a')||(s[i1]<='9'&&s[i1]>='0'))))
                i1++;
            while(i1<=i2&&(!((s[i2]<='Z'&&s[i2]>='A')||(s[i2]<='z'&&s[i2]>='a')||(s[i2]<='9'&&s[i2]>='0'))))
                i2--;
            if(i1<=i2&&s2num(s[i1])!=s2num(s[i2]))
                return false;
            i1++;
            i2--;
        }
        return true;
    }
};
