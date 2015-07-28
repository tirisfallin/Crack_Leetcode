class Solution {
public:
    string countAndSay(int n) {
        if(n==0)
            return "";
       string old="1";
        while(n>1){
            string update="";
            for(int i=0;i<old.size();)
            {
                int count=0;
                char temp=old[i];
                while((i+count)<old.size()&&old[i+count]==temp)
                    count++;
                update+=('0'+count);
                update+=temp;
                i+=count;
            }
            n--;
            old=update;
        }
    return old;
    }
};
