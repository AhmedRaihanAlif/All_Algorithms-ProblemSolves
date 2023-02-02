#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
int arr[10]={4,1,4,1,2,5,6,4,2,2};
int maxI=INT_MIN;
int maxfrequency=0;
int maxans=0;
int s;
map<int,int> m;


for(int i=0;i<10;i++){
  m[arr[i]]++;

 maxfrequency=max(maxfrequency,m[arr[i]]);
cout<<arr[i]<<" "<<maxfrequency<<endl;
if(m[arr[i]]>maxI){
        maxI=m[arr[i]];

     }
}
 cout<<maxI<<endl;
for(int i=0;i<10;i++){
    if(maxI==m[arr[i]]){

        maxans=arr[i];
        break;
    }
}
cout<<maxans;
/*for(auto i:m){
     if(i.second>maxI){
        maxI=i.second;
        s=i.first;
     }
   cout<<i.first <<" "<<i.second<<endl;
}
cout<<"Maxfrequency of "<<s<<" is "<<maxI;
*/
}
