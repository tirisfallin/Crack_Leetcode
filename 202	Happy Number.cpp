class Solution {
public:
    int gethappy(int n){
        int sum=0,digit;
        while(n!=0){
            digit=n%10;
            n=n/10;
            sum=sum+digit*digit;
        }
        return sum;
    }
    set<int> happy;
    bool isHappy(int n) {
        if(n==1)
            return true;
        if(happy.find(n)!=happy.end())
            return false;
        happy.insert(n);
        return isHappy(gethappy(n));
        
        
    }
};
