class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        string ret;
        if(strs.size()==0)
            return ret;
        int j=0;
        while(1){
            char temp=strs[0][j];
            for(int i=1;i<strs.size();i++){
                if(j==strs[i].size())
                    return ret;
                if(temp!=strs[i][j])
                    return ret;
            }
            ret+=temp;
            j++;
        }
        return ret;
    }
};
