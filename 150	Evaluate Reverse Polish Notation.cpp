class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int temp;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+")
            {
                temp=nums.top();
                nums.pop();
                nums.top()=nums.top()+temp;
            }
            else if(tokens[i]=="-")
            {
                temp=nums.top();
                nums.pop();
                nums.top()=nums.top()-temp;
            }
            else if (tokens[i]=="*")
            {
                temp=nums.top();
                nums.pop();
                nums.top()=nums.top()*temp;
            }
            else if (tokens[i]=="/")
            {
                temp=nums.top();
                nums.pop();
                nums.top()=nums.top()/temp;
            }
            else
                nums.push(std::atoi(tokens[i].c_str()));
        }
        return nums.top();
        
    }
};
