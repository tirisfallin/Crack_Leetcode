class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> v(word1.size()+1,vector<int>(word2.size()+1,0));
        for(int i1=1;i1<=word1.size();i1++)
            v[i1][0]=i1;
        for(int i2=1;i2<=word2.size();i2++)
            v[0][i2]=i2;
        for(int i1=1;i1<=word1.size();i1++)
            for(int i2=1;i2<=word2.size();i2++){
                int i=min(v[i1][i2-1],v[i1-1][i2]);
                if(word1[i1-1]==word2[i2-1])
                    v[i1][i2]=min(i+1,v[i1-1][i2-1]);
                else
                    v[i1][i2]=min(i+1,v[i1-1][i2-1]+1);
            }
        return v[word1.size()][word2.size()];
        

        
    }  

};
