class Solution {
public:
    bool isValid(string s) {
        stack<char> record;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                record.push(s[i]);
            else
                if(s[i]==')'||s[i]==']'||s[i]=='}')
                {   if(record.empty())
                    return false;
                    if(s[i]==')'&&record.top()!='(')
                        return false;
                    if(s[i]==']'&&record.top()!='[')
                        return false;
                    if(s[i]=='}'&&record.top()!='{')
                        return false;

                    else
                        record.pop();
                }
            else
                continue;
        }
        if(record.empty())
            return true;
        else
            return false;
        
    }
};
