class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1)
            return s;
        stack<char> st;
        int left,right;
        int maxleft=0,maxright=0;
        for(int i=0;i<s.size();i++){
            if((right=i+1)<s.size()&&s[right]==s[i]){
                left=i;
                while(left>=0&&right<s.size()&&s[left]==s[right])
                    left--,right++;
                left++;right--;
                if(maxright-maxleft<right-left){
                    maxright=right;
                    maxleft =left;
                }
            }
            if((i-1)>=0&&(i+1)<s.size()&&s[i-1]==s[i+1]){
                left=i-1;
                right=i+1;
                while(left>=0&&right<s.size()&&s[left]==s[right])
                    left--,right++;
                left++;right--;
                if(maxright-maxleft<right-left){
                    maxright=right;
                    maxleft =left;
                }
            }
        }
        return s.substr(maxleft,maxright-maxleft+1);
        
    }
};
