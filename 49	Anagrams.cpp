class Solution {
public:
    vector<string> anagrams(vector<string>& strs) {
        vector<string> ret;
        vector<string> tempstrs=strs;
        unordered_map<string, vector<int>> um;
        for(int i=0;i<strs.size();i++)
        {
            sort(tempstrs[i].begin(),tempstrs[i].end());
        }
        for(int i=0;i<strs.size();i++)
        {
            um[tempstrs[i]].push_back(i);
        }
        for(auto it=um.begin();it!=um.end();it++){
            if(it->second.size()>1)
                for(int i=0;i<it->second.size();i++)
                    ret.push_back(strs[it->second[i]]);
        }
        return ret;
        
    }
    
};
