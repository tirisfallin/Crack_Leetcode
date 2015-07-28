class Solution {
public:
    vector<string> ret;
    void letterhelper(string& digits,int i,string & s){
        if(i>=digits.size()){
            ret.push_back(s);
            return ;
        }
        char  begin;
        char end;
        if(digits[i]<'7'){
            begin=(digits[i]-'2')*3+'a';
            end=(digits[i]-'1')*3+'a';

        }
        else
            if(digits[i]=='7'){
                begin='p';
                end='t';
            }
            else if(digits[i]=='8'){
                begin='t';
                end='w';
            }
            else {
                begin='w';
                end='z'+1;
            }
        for(char i1=begin;i1<end;i1++)
        {
            s[i]=i1;
            letterhelper(digits, i+1, s);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return ret;
        string s(digits.size(),'0');
        letterhelper(digits,0,s);
        return ret;
    }
};
