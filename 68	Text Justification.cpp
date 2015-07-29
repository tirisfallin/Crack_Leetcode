class Solution {
public:
    void addspace(string& s,int & num,int & maxWidth){
        int length=0;
        if(num!=1){
            length=(maxWidth-s.size()+num-1)/(num-1);
        istringstream is(s);
        string news="";
        string space(length,' ');
        string temp;
        int extra=maxWidth-s.size()+num-1-(num-1)*length;
        is>>temp;
        news=temp;
        while(is>>temp){
            if(extra>0){
                news+=' ';
                extra--;
            }
            news=news+space+temp;
        }
        s=news;
        }
        else
            s+=string(maxWidth-s.size(),' ');
        
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int i=0;
        vector<string > ret;
        string s="";
        int num=0;
        while(i<words.size()){
            if(num==0){
                s+=words[i];
                num++;
                i++;
            }
            else{
                if((s.size()+1+words[i].size())<=maxWidth){
                    s=s+' '+words[i];
                    i++;
                    num++;
                }
                else{
                    addspace(s,num,maxWidth);
                    ret.push_back(s);
                    s.clear();
                    num=0;
                }
            }
        }
        s=s+string(maxWidth-s.size(),' ');
        ret.push_back(s);
            return ret;
        
    }
};
