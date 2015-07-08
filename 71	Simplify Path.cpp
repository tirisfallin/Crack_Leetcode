class Solution {
public:
    string simplifyPath(string path) {
        vector<string> content;
        string word;
        stringstream p(path);
        while(getline(p,word,'/')){
            if(word=="."||word=="") continue;
            if(word==".."&&!content.empty())
                content.pop_back();
            else if(word!="..")
                content.push_back(word);
        }
        string ret="";
        for(auto str : content) ret += "/"+str;
        return ret.empty()? "/":ret;
        
    }
};
