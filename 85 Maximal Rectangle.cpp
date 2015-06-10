     class Solution {
     public:
         int largestRectangleArea(vector<int> height) {
             if(height.empty())
                 return 0;
             height.push_back(0);
             
             stack<int> index;
             int ret=0;
             int i=0,left,right;
             int h;
             while(i<height.size()){
                 if(index.empty()||height[i]>=height[index.top()])
                     index.push(i++);
                 else{
                     h=height[index.top()];
                     index.pop();
                     if(index.empty())
                         left=-1;
                     else
                         left=index.top();
                     ret=max(ret,h*(i-left-1));
                 }
                 
             }
             return ret;
         }
         
     int maximalRectangle(vector<vector<char>>& matrix) {
         int ret=0;
         if(matrix.empty()||matrix[0].empty())
             return 0;
         int row=matrix.size(),col=matrix[0].size();
         vector<int>height(col,0);
         for(int i1=0;i1<row;i1++){
             for(int i2=0;i2<col;i2++)
                 if(matrix[i1][i2]=='0')
                     height[i2]=0;
                 else
                     height[i2]++;
             ret=max(ret,largestRectangleArea(height));
         }
         
         return ret;
     }
     };
