class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
            return -1;
        vector<int> next(needle.size(),0);
        int k=0;
        for(int i=1;i<needle.size();i++)
        {
            while(k!=0&&needle[i]!=needle[k])
                k=next[k-1];
            if(needle[i]==needle[k])
                k++;
            next[i]=k;
        }
        int i=0;
        while(i<=haystack.size()-needle.size()){
            int i1=0;
            for(i1=0;i1<needle.size();i1++){
                if(haystack[i+i1]!=needle[i1]){
                   if(i1==0)
                       i++;
                    else
                        i+=(i1-next[i1-1]);
                    break;
                }
            }
            if(i1==needle.size())
                return i;

        }
        return -1;
    }
};
