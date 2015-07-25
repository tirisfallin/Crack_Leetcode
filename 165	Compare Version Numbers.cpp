class Solution {
public:
    int compareVersion(string version1, string version2) {
        int sum1=0,sum2=0;
        int i1=0,i2=0;
        while(i1<version1.size()||i2<version2.size()){
            sum1=0;
            sum2=0;
            while(i1<version1.size()&&version1[i1]!='.'){
                sum1=sum1*10+version1[i1++]-'0';
            }
            
            while(i2<version2.size()&&version2[i2]!='.'){
                sum2=sum2*10+version2[i2++]-'0';
            }
            if(version1[i1]=='.')
                i1++;
            
            if(version2[i2]=='.')
                i2++;
            if(sum1>sum2)
                return 1;
            else if(sum1<sum2)
                return -1;
            else if(i1==version1.size()&&i2==version2.size())
                return 0;
        }
        return 0;
    }
};
