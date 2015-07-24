class Solution {
public:
    string multiply(string num1, string num2) {
        string ret(num1.size()+num2.size(),'0');
        for(int i=num1.size()-1;i>=0;i--){
            int carry=0;
            
            for(int j=num2.size()-1;j>=0;j--){
                int temp=(ret[j+i+1]-'0')+(num1[i]-'0')*(num2[j]-'0')+carry;
                ret[j+i+1]='0'+temp%10;
                carry=temp/10;
            }
            ret[i]+=carry;
    }
        int i=0;
        while(ret[i]=='0')
            i++;
        ret=ret.substr(i,ret.size()-i);
        if(ret.empty())
            ret='0';
        return ret;
        
    }
};
