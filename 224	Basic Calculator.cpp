class Solution {
public:
    int calculate(string s) {
        int sum=0;
        int num=0;
        int sign=1;
        stack<int> signs;
        signs.push(1);
        for(auto t :s){
            if(t<='9'&&t>='0'){
                num=num*10+t-'0';
            }
            else if (t=='+'||t=='-'){
                sum=sum+sign*signs.top()*num;
                num=0;
                sign=(t=='+')? 1:-1;
            }
            else if(t=='('){
                signs.push(signs.top()*sign);
                sign=1;
            }
            else if(t==')'){
                sum=sum+sign*signs.top()*num;
                sign=1;
                signs.pop();
                num=0;
            }
        }
        if(num!=0)
            sum=sum+sign*signs.top()*num;
        return sum;
    }

};
