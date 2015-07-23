class Solution {
public:
    void calculate(stack<char>& op,stack<int>& nums){
        int num=0;
        while(!op.empty()){
            if(op.top()=='+')
                num=num+nums.top();
            else
                num=num-nums.top();
            nums.pop();
            op.pop();
        }
        num=num+nums.top();
        nums.pop();
        nums.push(num);
        
    }
    void multiply(stack<char>& op,stack<int>& nums){
        if((!op.empty())&&(op.top()=='*'||op.top()=='/')){
            int topnum=nums.top();
            nums.pop();
            int num=nums.top();
            nums.pop();
            if(op.top()=='*'){
                topnum=topnum*(num);
            }
            else{
                topnum=num/topnum;
            }
            op.pop();
            nums.push(topnum);
        }

        
    }
    int calculate(string s) {
        stack<char> op;
        stack<int>  nums;
        int num=0;
        int topnum;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'||s[i]=='-'){
                nums.push(num);
                num=0;
                multiply(op, nums);
                if(!op.empty())
                calculate(op,nums);
                
                op.push(s[i]);
            }
            else if(s[i]=='*'||s[i]=='/'){
                nums.push(num);
                num=0;
                multiply(op, nums);
                op.push(s[i]);
            }
            else if(s[i]<='9'&&s[i]>='0'){
                num=num*10+s[i]-'0';
            }
        }
        nums.push(num);
        multiply(op,nums);
        calculate(op,nums);
        return nums.top();
    }
};
