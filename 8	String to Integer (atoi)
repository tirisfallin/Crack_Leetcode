class Solution {
public:
    int myAtoi(string str) {
        int start=0,end=str.size()-1;
        while(start<=end&&str[start]==' ')
            start++;
        if(str.empty())
            return 0;
        int sum=0,flag=1;
        bool num=false;
        int i=0;
        i=start;
        if(str[start]=='-'||str[start]=='+'){
            flag=str[start]=='-'?-1:1;
            start++;
        }
        i=start;
        for(;i<str.size();i++){
            if(str[i]<='9'&&str[i]>='0'){
                int l=str[i]-'0';
                num=true;
                if(INT_MAX/10<sum||(INT_MAX/10==sum&&l>INT_MAX%10))
                    return flag==1?INT_MAX:INT_MIN;
                sum=sum*10+l;
            }
            else break;
        }
        sum=sum*flag;
        return sum;
    }
};
