class Solution {
public:
    
    string fractionToDecimal(int64_t numerator, int64_t denominator) {
        string s;
        if(numerator!=0&&((numerator>0)^(denominator>0)))
            s+='-';
        numerator=abs(numerator);
        denominator=abs(denominator);
            
        
        int64_t round=numerator/denominator;
        numerator=numerator-round*denominator;
        s+=to_string(round);
        
        if(numerator==0)
            return s;
        s=s+'.';
        
        numerator=numerator*10;
        unordered_map<int, int>m;
        while(numerator!=0){
            if(m.count(numerator)>0){
                s.insert(m[numerator], 1,'(');
                s=s+')';
                break;
                
            }
            m[numerator]=s.size();
            s=s+to_string(numerator/denominator);
            numerator=numerator%denominator;
            numerator=numerator*10;
        }
        if(s[0]=='.')
            s.insert(s.begin(), '0');
        return s;
    }
};
