class Solution {
public:
    int romanToInt(string s) {
       int I=1;
        int V=5;
        int X=10;
        int L=50;
        int C=100;
        int D=500;
        int M =1000;
        int IV=4;
        int IX=9;
        int XL=40;
        int XC=90;
        int CD=400;
        int CM=900;
        int counter=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='I' && s[i+1]=='V'){
              counter+=IV;


                 i++;
            }
           else if(s[i]=='I'&& s[i+1]=='X'){
              counter+=IX;


                   i++;
            }
          else  if(s[i]=='X'&& s[i+1]=='L'){
             counter+=XL;


                   i++;
            }
           else if(s[i]=='X'&& s[i+1]=='C'){
             counter+=XC;


                   i++;
            }
          else  if(s[i]=='C'&& s[i+1]=='D'){
              counter+=CD;


                   i++;
            }
           else if(s[i]=='C' && s[i+1]=='M'){
              counter+=CM;


                   i++;
            }
            else{
              if(s[i]=='I'){
             counter+=I;


            }
                else if(s[i]=='V'){
              counter+=V;


            }
               else  if(s[i]=='X'){
              counter+=X;

            }
               else  if(s[i]=='L'){
              counter+=L;

            }
               else  if(s[i]=='C'){
              counter+=C;


            }
                else if(s[i]=='D'){
              counter+=D;


            }
                else if(s[i]=='M'){
             counter+=M;


            }

            }

        }
        return {counter};
    }
};
