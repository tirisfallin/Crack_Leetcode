class Solution {
public:
    vector<string> ret;
    void parenthesishelper(string s,int & n,int left,int right){
        if(left==right&&left==n){
            ret.push_back(s);
            return ;
        }
        if(left>right&&left<n){
            parenthesishelper(s+"(", n, left+1, right);
            parenthesishelper(s+")", n, left, right+1);
        }
        else if(left==right&&left<n){
            parenthesishelper(s+"(", n, left+1, right);
            
        }
        else if(left>=right&&left==n){
            parenthesishelper(s+")", n, left, right+1);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        parenthesishelper("", n,0, 0);
        return ret;
    }
};
