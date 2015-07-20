class Solution {
public:
    vector<int> primes;
    
    int countPrimes(int n) {
        if(n<=1)
            return 0;
        int i=2;
        bool pri=true;
        int s;
        while(i<n){
            s=sqrt(i);
            for(int t=0;t<primes.size();t++){
                if(primes[t]>s)
                    break;
                if(i%primes[t]==0){
                    pri=false;
                    break;
                }
            }
            if(pri)
                primes.push_back(i);
            i++;
            pri=true;
        }
        return primes.size();
    }
};
