class Solution {
public:
    string minWindow(string s, string t) {
        string ret;
      if(s.empty()||t.empty())
          return ret;
        bool req[128]={false};
        int  num[128]={0};
        int count=0;
        int left=0,right=-1;
        int minleft=0,length=INT_MAX;
        for(int i=0;i<t.size();i++)
        {
            num[t[i]]++;
            req[t[i]]=true;
            count++;
        }
        while(left<(int)s.size()&&right<(int)s.size()){
            if(count){
                right++;
                num[s[right]]--;
                if(req[s[right]]&&num[s[right]]>=0)
                    count--;
                if((count==0)&&(length>right-left)){
                    length=right-left;
                    minleft=left;
                }
                
            }
            else{
                if((length>right-left)){
                    length=right-left;
                    minleft=left;
                }
                num[s[left]]++;
                if(req[s[left]]&&num[s[left]]>0)
                    count++;
                left++;
            }
            
        }
        if(length==INT_MAX)
            return ret;
        return s.substr(minleft,length+1);
    }
};
