class Solution {
public:
    string addBinary(string a, string b) {
        stack<bool> result;
        bool up=false;
        bool count=false;
        string ret;
        int i1=a.size()-1,i2=b.size()-1;
        int t1,t2;
        while(i1>=0&&i2>=0){
            t1=a[i1--]-'0';
            t2=b[i2--]-'0';
            result.push((t1^t2)^up);
            up=(t1&t2)|((t1|t2)&up);

        }
        if(i1<0){
            while(i2>=0){
                t2=b[i2--]-'0';
                result.push(t2^up);
                up=t2&up;
            }
            
        }
        if(i2<0){
            while(i1>=0){
                t1=a[i1--]-'0';
                result.push(t1^up);
                up=t1&up;
            }
        }
        if(up)
            result.push(true);
        while(!result.empty()){
            if(result.top())
                ret+='1';
            else
            ret+='0';
            result.pop();
        }

        return ret;
    }
};
