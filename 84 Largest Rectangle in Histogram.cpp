 class Solution {
 public:
 int largestRectangleArea(vector<int>& height) {
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
 };
