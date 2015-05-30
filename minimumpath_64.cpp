class Solution {
public:
    int min(int a,int b){
        if(a<b)
            return a;
        return b;
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        vector<int>::size_type row=grid.size(),col=grid[0].size();
        vector<vector<int>> distance(row,vector<int>(col,0));
        
        distance[0][0]=grid[0][0];
        //initialization
        for(int i1=1;i1<row;i1++)
            distance[i1][0]=distance[i1-1][0]+grid[i1][0];
        for(int i2=1;i2<col;i2++)
            distance[0][i2]=distance[0][i2-1]+grid[0][i2];
        int corner=1;
        while(corner<min(row,col)){
            distance[corner][corner]=min(distance[corner-1][corner],distance[corner][corner-1])+grid[corner][corner];
            for(int i1=corner+1;i1<row;i1++)
                distance[i1][corner]=min(distance[i1-1][corner],distance[i1][corner-1])+grid[i1][corner];
            for(int i2=corner+1;i2<col;i2++)
                distance[corner][i2]=min(distance[corner][i2-1],distance[corner-1][i2])+grid[corner][i2];
            corner++;
            
        }
        return distance[row-1][col-1];
    }
};
