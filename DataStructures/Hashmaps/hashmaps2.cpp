#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
int arr[10]={2,4,2,4,1,2,5,6,4,2};
int maxI=INT_MIN;
map<int,int> m;
for(int i=0;i<10;i++){
   m[arr[i]]++;
}
for(auto i:m){
     if(i.second>maxI){
        maxI=i.second;
     }
   cout<<i.first <<" "<<i.second<<endl;
}
cout<<maxI;
}
