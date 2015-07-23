class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ret;
        if(words.empty()||words[0].empty()||s.empty())
            return ret;
        int wl=words[0].size();
        
        unordered_map<string, int> m;
        for(int i=0;i<words.size();i++)
            m[words[i]]++;
        
        int left,right;
        for(int wi=0;wi<wl;wi++){
            
            left=wi;
            right=wi;
            unordered_map<string, int> mt;
            int count=0;
        while(left<(int)s.size()&&right<(int)s.size()){
            string temp=s.substr(right,wl);
            if(m.count(temp)!=0){
                mt[temp]++;
                if(mt[temp]<=m[temp]){
                    count++;
                }
                else{
                    while(mt[temp]>m[temp]){
                        mt[s.substr(left,wl)]--;
                        if(mt[s.substr(left,wl)]<m[s.substr(left,wl)])
                            count--;
                        left+=wl;
                    }
                }
    
            }
            else{
                mt.clear();
                count=0;
                left=right+wl;
                
            }
            if(count==words.size())
                ret.push_back(left);
            right+=wl;
            
        }
        }
        return ret;
        
    }
};
