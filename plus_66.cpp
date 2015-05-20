class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        bool carry=true;
        vector<int>ret;
        int pointer=digits.size()-1;
        while(carry&&pointer>=0){
            carry=false;
        if((digits[pointer]=digits[pointer]+1)==10){
            digits[pointer]=0;
            carry=true;
            pointer--;
            }
        }
        if(carry){
            ret.push_back(1);
            for(int i=0;i<digits.size();i++)
                ret.push_back(digits[i]);
        }
        else{
            ret=digits;
        }

        return ret;
        
    }
};
