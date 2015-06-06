class Solution {
public:
    void combinationSump(vector<vector<int>>& r,vector<int> &v,int start,const int k,int target){
        if(target<=0||start>=k)
            return ;
        if(start==k-2)
        {    if(target>v[start]&&target<=9)
            {v[start+1]=target;
                r.push_back(v);
                return ;
            }
            else
            return ;
        }
        else{
            for(int i=v[start]+1;target-i>0;i++){
                 v[start+1]=i;
                 combinationSump(r,v,start+1,k,target-i);
            }
        }
    
        
        
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<int> v(k,0);
        vector<vector<int>> r;
        r.clear();
        if(k==1&&n<=9&&n>=1)
            r.push_back(vector<int> {n});
        else
        for(int i=1;i<=9;i++){
        v[0]=i;
        combinationSump(r,v,0,k,n-i);
        }
        return r;
        
    }
};
