class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        if(triangle.empty())
            return 0;
        vector<int> path(triangle.size()+1,INT_MAX);
        int num=0;
        path[1]=0;
        for(;num<triangle.size();num++)
        for(int i=num;i>=0;i--)
        {   path[i+1]=min(path[i],path[i+1])+triangle[num][i];
        }
        int min=path[0];
        for(int i=1;i<triangle.size()+1;i++)
            if(path[i]<min)
                min=path[i];
        return min;
      
    }
};
