class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int c=0;c<s.size();c++){
        if(s[c]=='I' && s[c+1]!='V' && s[c+1]!='X'){
            sum+=1;
        }
        else if(s[c]=='I' && s[c+1]=='V'){
            sum+=4;
            c++;
        }
        else if(s[c]=='I' && s[c+1]=='X'){
            sum+=9;
            c++;
        }
        else if(s[c]=='V'){
            sum+=5;
        }
        else if(s[c]=='X' && s[c+1]!='L' && s[c+1]!='C'){
            sum+=10;
        }
        else if(s[c]=='X' && s[c+1]=='L'){
            sum+=40;
            c++;
        }
        else if(s[c]=='X' && s[c+1]=='C'){
            sum+=90;
            c++;
        }
        else if(s[c]=='L'){
            sum+=50;
        }
        else if(s[c]=='C' && s[c+1]!='D' && s[c+1]!='M'){
            sum+=100;
        }
        else if(s[c]=='C' && s[c+1]=='D'){
            sum+=400;
            c++;
        }
        else if(s[c]=='C' && s[c+1]=='M'){
            sum+=900;
            c++;
        }
        else if(s[c]=='D'){
            sum+=500;
        }
        else if(s[c]=='M'){
            sum+=1000;
        }
    }
    return sum;
    }
};