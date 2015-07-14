class Solution {
public:
    bool isNumber(string s) {
        bool e=false,point=false,prenumberexists=false,pronumberexists=false;
        int t=0;
        int start=0,end=s.size()-1;
        while(start<=end&&s[start]==' ')
            start++;
        while(start<=end&&s[end]==' ')
            end--;
        if(s[start]=='-'||s[start]=='+')
            start++;
        for(t=start;t<=end;t++){
                
            if(s[t]<='9'&&s[t]>='0'){
                if(e)
                    pronumberexists=true;
                prenumberexists=true;
                continue;

                    
            }
            else if(s[t]=='.'){
                if(!point){
                    point=true;
                    if(e)
                        return false;
                }
                else
                    return false;
            }
            else if(s[t]=='e'){
                if((t+1)<=end&&(s[(t+1)]=='-'||s[(t+1)]=='+'))
                    t++;

                if(!e){
                    if(!prenumberexists)
                        return false;
                    e=true;
                }
                else
                    return false;
            }
            else
                return false;
        }
        if(point&&!prenumberexists)
            return false;
        if((e)&&!pronumberexists)
            return false;
        if(!prenumberexists)
            return false;
        return true;
    }
};
