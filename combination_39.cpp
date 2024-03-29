class Solution {
public:
    
    Solution(){
        
    }
    void inorder(vector<int>& vandidates){
        bool change=true;
        int temp;
        for(int i1=vandidates.size();i1>1&&change;i1--){
            change=false;
        for(int i=0;i<i1-1;i++)
            if(vandidates[i]>vandidates[i+1])
            {
                temp=vandidates[i];
                vandidates[i]=vandidates[i+1];
                vandidates[i+1]=temp;
                change=true;
            }
        }
        
    }
    int remain(const vector<int>& candidates,const vector<int> & count ,int end){
        int sum=0;
        for(int i1=end;i1<candidates.size();i1++){
            sum=sum+candidates[i1]*count[i1];
        }
        return sum;
    }
    void setzero(vector<int> & count,int end){
        for(int i1=0;i1<end;i1++)
            count[i1]=0;
    }
    
    void repeated(vector<int>& candidates,vector<int>& count,int end,
                  const int target,vector<vector<int>>& temp){
        int new_target;
        new_target=target-remain(candidates,count,end);
        if(new_target>0)
        {
        int num;
        if(end>1){
            setzero(count,end);
            
            num=new_target/candidates[end-1];
            if(num*candidates[end-1]==new_target)
            {
                count[end-1]=num;
                temp.push_back(count);
                
                for(int i=num-1;i>=0;i--){
                    count[end-1]=i;
                    repeated(candidates,count,end-1,target,temp);
                }
            }
            else{
                for(int i=num;i>=0;i--){
                    count[end-1]=i;
                    repeated(candidates,count,end-1,target,temp);
                }
            }


            
            
            
        }
        else{
            if(new_target/candidates[0]*candidates[0]==new_target)
            { count[0]=new_target/candidates[0];
            temp.push_back(count);
            }
        }
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        inorder(candidates);
        vector<vector<int>> temp;
        vector<int> count(candidates.size(),0);
        repeated(candidates,count,candidates.size(),target,temp);
        vector<vector<int>> ret;
        vector<int> temp2;
        
        for(int i1=0;i1<temp.size();i1++){
            temp2.clear();
            for(int i2=0;i2<candidates.size();i2++)
                for(int i3=0;i3<temp[i1][i2];i3++)
                    temp2.push_back(candidates[i2]);
        
            ret.push_back(temp2);
        }
        return ret;
    }
};
