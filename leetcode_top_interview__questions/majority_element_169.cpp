class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int maxI=INT_MIN;
    int s=0;
    map<int,int> m;
    for(int i=0;i<nums.size();i++){
  m[nums[i]]++;
}
for(auto i:m){
     if(i.second>maxI){
        maxI=i.second;
        s=i.first;
     }

}
return s;
    }
};
