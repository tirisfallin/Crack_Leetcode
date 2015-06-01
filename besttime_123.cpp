 class Solution {
 public:
     int mainProfit(vector<int>& prices,int begin,int end){
         if(begin>=end)
             return 0;
         int _min=INT_MAX,profits=0;
         int sum=0;
         for(int i=begin;i<end;i++)
         {
             _min=min(_min,prices[i]);
             profits=max(profits,prices[i]-_min);
         }
         return profits;

         
     }
       int maxProfit(vector<int>& prices) {
           if(prices.empty())
               return 0;
           int max_temp;
           int _min=INT_MAX,profits=0;
           int r=0;
           int begin,beginpoints;
           int end,endpoints;
           beginpoints=prices[0];
           for(begin=1;begin<prices.size()&&prices[begin]<=beginpoints;begin++)
               beginpoints=prices[begin];
           
           begin=begin-1;
           
           endpoints=prices[prices.size()-1];
           for(end=prices.size()-2;end>=0&&prices[end]>=endpoints;end--)
               endpoints=prices[end];
           
           end=end+1;
           
           
           
           for(int i=begin;i<=end;i++)
           {
               _min=min(_min,prices[i]);
               profits=max(profits,prices[i]-_min);
               max_temp=profits+mainProfit(prices,i,end+1);
               r=max(r,max_temp);
               if(r==0)
                   break;
           }
           return r;
       }
 };
