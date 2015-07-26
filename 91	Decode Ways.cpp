class Solution {
public:
    int decodehelper(string& s,int begin){
        if(s.size()-begin>0&&s[begin]=='0')
            return 0;
        if(s.size()-begin==1||s.size()-begin==0){
            return 1;
        }
        if(s[begin]>='3')
          return decodehelper(s,begin+1);
        if(10*s[begin]+s[begin+1]-11*'0'<=26)
            return decodehelper(s, begin+1)+decodehelper(s, begin+2);
        else
            return decodehelper(s,begin+1);
            
    }
    int numDecodings(string s) {
        int begin=s.size()/2;
        string temp;
        if(s.empty())
            return 0;
        while(begin>=0){
            if(s[begin]>='3')
                break;
            else
                begin--;
        }
        if(begin>0)
        {
            temp=s.substr(0,begin+1);
            return decodehelper(s, begin+1)*decodehelper(temp, 0);
        }
        else return decodehelper(s, 0);
    }
};
