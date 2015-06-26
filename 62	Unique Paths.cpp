class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> p(n+1,1);
        p[0]=0;
        for(int i1=0;i1<m-1;i1++)
            for(int i2=1;i2<=n;i2++)
                p[i2]=p[i2]+p[i2-1];
        
        return p[n];
    }
};
