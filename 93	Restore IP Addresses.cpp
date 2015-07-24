class Solution {
public:
    vector<vector<int>> ret;
    void Iphelper(const string& s,vector<int> parts ){
        if((int)(s.size()-parts[parts.size()-1]-(5-parts.size())*3)>0)
            return ;
        if(parts.size()==4){
            if(s.size()-parts[3]<=3&&s.size()-parts[3]>0){
                if(s.size()-parts[3]!=1&&s[parts[3]]=='0')
                    return ;
                int ip=stoi(s.substr(parts[3],s.size()-parts[3]));
                if(ip>=0&&ip<=255)
                {
                    parts.push_back(s.size());
                    ret.push_back(parts);
                }
            }
        }
        else for(int i=1;i<=3&&i<(int)(s.size()-parts[parts.size()-1]);i++){
            if((i!=1)&&s[parts[parts.size()-1]]=='0')
                continue;
            int ip=stoi(s.substr(parts[parts.size()-1],i));
            if(ip<0||ip>255)
                continue;
            else{
                parts.push_back(parts[parts.size()-1]+i);
                Iphelper(s, parts);
                parts.pop_back();
            }
            
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<int> parts;
        parts.push_back(0);
        Iphelper(s, parts);
        vector<string> vs;
        string temp;
        for(int i1=0;i1<ret.size();i1++){
            temp="";
            for(int i2=0;i2<ret[i1].size()-1;i2++){
                temp+=s.substr(ret[i1][i2],ret[i1][i2+1]-ret[i1][i2]);
                temp+=".";
            }
            vs.push_back(temp.substr(0,temp.size()-1));
        }
        return vs;
    }
};
