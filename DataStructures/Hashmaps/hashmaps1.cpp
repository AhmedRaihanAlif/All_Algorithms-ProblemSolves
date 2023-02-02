#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

unordered_map<string,int> m;

pair<string,int> p1 ("Alif",4);
pair<string,int> p2 ("Ahmed",2);
pair<string,int> p3 ("Raihan",6);
pair<string,int> p4 ("ARA",7);
m.insert(p1);
m.insert(p2);
m.insert(p3);
m.insert(p4);
cout<<m.at("Ahmed")<<endl;
cout<<m.at("Raihan")<<endl;
cout<<m.at("ARA")<<endl;
cout<<m.count("Alif")<<endl;
cout<<m.max_size()<<endl;
for(auto i:m){
    cout<<i.first <<" "<<i.second<<endl;
}

}
