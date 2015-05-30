class Solution {
public:
    
    void sort(vector<pair<int,bool>>&num,int low,int high){
        if(low<high){
            int pivot=low;
            int left=low+1,right=high;
            pair<int,bool> temp,temp1;
            while(left<right){
                while(left<right&&comp(num[left],num[pivot]))
                    left++;
                while(left<right&&!comp(num[right],num[pivot]))
                    right--;
                if(left<right){
                    temp=num[left];
                    num[left]=num[right];
                    num[right]=temp;
                    
                }
            }
            while(!comp(num[left],num[pivot])&&left>low)
                left--;
            if(left!=pivot)
            {
                temp=num[left];
                num[left]=num[pivot];
                num[pivot]=temp;
                
            }
            sort(num,low,left-1);
            sort(num,left+1,high);
        }
        
    }
    
    bool comp(const pair<int,bool> a,const pair<int,bool>b){
       
        if(a.first<b.first)
            return true;
            else if(a.first==b.first&&a.second&&!b.second)
                return true;
            return false;
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> r;
        if(intervals.empty())
            return r;
       vector<pair<int,bool>> l;
        
        for(int i=0;i<intervals.size();i++){
            l.push_back(pair<int,bool>(intervals[i].start,true));
            l.push_back(pair<int,bool>(intervals[i].end,false));
        }
        sort(l,0,l.size()-1);
       
        stack<int> s;
        vector<pair<int,bool>>::iterator lpointer=l.begin();
        
        Interval itemp;
        for(;lpointer!=l.end();lpointer++)
        {
            if(s.empty()){
                itemp.start=(*lpointer).first;
                s.push((*lpointer).second);
            }
            else{
                if(s.top()!=(*lpointer).second)
                    s.pop();
                else
                    s.push((*lpointer).second);
                
                if(s.empty()){
                    itemp.end=(*lpointer).first;
                    r.push_back(itemp);
                }
            }
        }
        return r;
        
        
    }
};
