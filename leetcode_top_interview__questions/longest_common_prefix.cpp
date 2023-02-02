#include<bits/stdc++.h>
using namespace std;
int main(){
string str[3];
cin>>str[0]>>str[1]>>str[2];
string arr[200];
int x=0,c=0;
for(int i=0;i<200;i++)
{
   if(str[0][x]==str[1][x] && str[1][x]==str[2][x]) {
    arr[c]=str[0][x];
    c++;

   }
x++;
}
for(int i=0;i<c;i++){
    cout<<arr[i];
}

}
