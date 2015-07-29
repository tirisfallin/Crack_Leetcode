class Solution {
public:
    void reverseWords(string &s) {
        string word="";
        stack<string> st;
        for(int i=0;i<s.size();){
            if(s[i]==' '){
                if(!word.empty()){
                    st.push(word);
                    word.clear();
                }
            while(s[i]==' ')
                i++;
            }
            else{
                if(i<s.size())
                    word+=s[i++];
            }
        }
        s.clear();
        if(!word.empty()&&word[0]!=' ')
        s+=word;
        while(!st.empty()){
            if(!s.empty())
                s+=" ";
            s+=st.top();
            st.pop();
        }
    }
};
