class Solution {
public:
    string intToRoman(int num) {
        string ret="";
        int d;
        while(num>=0){
            if(num>=900){
                if(num>=1000){
                    d=num/1000;
                    num=num-d*1000;
                    while((d--)>0)
                        ret+='M';
                }
                else{
                    ret+="CM";
                    num-=900;
                }
            }
            else if(num>=400){
                if(num>=500){
                    d=num/500;
                    num=num-d*500;
                    while((d--)>0)
                        ret+='D';
                }
                else{
                    ret+="CD";
                    num-=400;
                }
            }
            else if(num>=90){
                if(num>=100){
                    d=num/100;
                    num=num-d*100;
                    while((d--)>0)
                        ret+='C';
                }
                else{
                    ret+= "XC";
                    num-=90;
                }
            }
            else if(num>=40){
                if(num>=50){
                    d=num/50;
                    num=num-d*50;
                    while((d--)>0)
                        ret+='L';
                }
                else{
                    ret+= "XL";
                    num-=40;
                }
            }
            else if(num>=9){
                if(num>=10){
                    d=num/10;
                    num=num-d*10;
                    while((d--)>0)
                        ret+='X';
                }
                else{
                    ret+= "IX";
                    num-=9;
                }
            }
            else if(num>=4){
                if(num>=5){
                    d=num/5;
                    num=num-d*5;
                    while((d--)>0)
                        ret+='V';
                }
                else{
                    ret+= "IV";
                    num-=40;
                }
            }
            else{
                while((num--)>0)
                    ret+='I';
            }
           
        }
        return ret;
    }
};
