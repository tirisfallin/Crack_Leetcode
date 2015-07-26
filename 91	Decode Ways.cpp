class Solution {
public:
    int decodehelper(string& s,int begin,int end){
        if(begin>end)
            return 0;
        if(end-begin>0&&s[begin]=='0')
            return 0;
        if(end-begin==1||end-begin==0){
            return 1;
        }
        if(end-begin==2){
            if(10*s[begin]+s[begin+1]-11*'0'<=26)
                return decodehelper(s, begin+1,end)+decodehelper(s, begin+2,end);
            else
                return decodehelper(s,begin+1,end);
        }
        int length=(end-begin)/2;
        while(length>0&&begin+length<end){
            if(s[begin+length]>='3')
                break;
            else
                length--;
        }
        if(length>0&&begin+length<end)
        {
            string temp=s.substr(begin,length+1);
            return decodehelper(s, begin+length+1,end)*decodehelper(temp, 0,temp.size());
        }
        
        if(10*s[begin]+s[begin+1]-11*'0'<=26)
            return decodehelper(s, begin+1,end)+decodehelper(s, begin+2,end);
        else
            return decodehelper(s,begin+1,end);
            
    }
    int numDecodings(string s) {
        if(s.empty())
            return 0;
        else return decodehelper(s, 0,s.size());
    }
};
