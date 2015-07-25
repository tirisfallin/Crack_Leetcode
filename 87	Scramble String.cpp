class Solution {
public:
    bool ScrambleHelper(string &s1,int start1,int end1,string &s2,int start2,int end2){
        unordered_map<int, int> m;
        if(end1)
        if(end1-start1==1&&s1[start1]==s2[start2])
            return true;
        for(int i=start1;i<end1;i++){
            m[s1[i]]++;
        }
        for(int i=start2;i<end2;i++){
            m[s2[i]]--;
        }
        for(int i=start1;i<end1;i++)
            if(m[s1[i]]!=0)
                return false;
        for(int i=1;i<end1-start1;i++){
            if(ScrambleHelper(s1, start1, start1+i, s2, start2, start2+i)
               &&ScrambleHelper(s1, start1+i, end1, s2, start2+i, end2))
               return true;
            if(ScrambleHelper(s1, start1, start1+i, s2, end2-i, end2)
               &&ScrambleHelper(s1, start1+i, end1,s2, start2, end2-i) )
                return true;
    
        }
        return false;
    }
    bool isScramble(string s1, string s2) {
        if(s1.empty())
            return true;
        return ScrambleHelper(s1,0, s1.size(), s2, 0, s2.size());
    }
};
