class Solution {
public:
    void max_peak(const vector<int>& prices,vector<int>& max_index){
        //寻找拐点
        int i1;
        for(i1=1;i1<prices.size()-1;i1++)
            if(prices[i1]>prices[i1-1]&&prices[i1]>=prices[i1+1]){
                max_index.push_back(i1);
            }
        if(prices[i1]>prices[i1-1])
            max_index.push_back(i1);
        
    }
    
    void min_peak(const vector<int>& prices,vector<int>& min_index){
        //寻找拐点
        if(prices[0]<prices[1])
            min_index.push_back(0);
        for(int i1=1;i1<prices.size()-1;i1++)
            if(prices[i1]<=prices[i1-1]&&prices[i1]<prices[i1+1]){
                min_index.push_back(i1);
            }
        
    }
    
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0||prices.size()==1)
            return 0;
        vector<int> max_index,min_index;
        max_peak(prices,max_index);
        min_peak(prices,min_index);
        int profit=0;
        for(int i=0;i<max_index.size();i++)
            profit=profit+prices[max_index[i]]-prices[min_index[i]];


        return profit;
    }
};
