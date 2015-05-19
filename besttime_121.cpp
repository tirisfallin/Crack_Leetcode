class Solution {
public:
    void max_index(const vector<int>& prices,vector<int>& index,vector<int>& max){
        int temp=*(prices.end()-1);
        index.push_back(prices.size()-1);
        max.push_back(temp);
        for(int i1=prices.size()-2;i1>=0;i1--)
            if(prices[i1]>temp){
                temp=prices[i1];
                max.push_back(temp);
                index.push_back(i1);
            }
            
    }
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        vector<int> index;
        vector<int> max;
        max_index(prices,index,max);
        int profit=0;
        int temp;
        int index_index=index.size()-1;
        for(int i=0;i<prices.size()-1;i++)
        {
            while(index[index_index]<i)
                index_index--;
            temp=max[index_index]-prices[i];
            if(profit<temp)
                profit=temp;

        }
        return profit;
    }
};
