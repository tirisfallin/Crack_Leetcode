class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                st.push(i);
            else{
                if(!st.empty()&&s[st.top()]=='(')
                    st.pop();
                else
                    st.push(i);
            }
        }
        int cur=(int)s.size();
        int length=0;
        while(!st.empty()){
            length=max(length,cur-st.top()-1);
            cur=st.top();
            st.pop();
        }
        length=max(length,cur);
        return length;
    }
};
