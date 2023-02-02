class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0,b=0;
    int c= nums.size();
if( c==1){

    return {0};
   }


  else{
    for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++){
            if(nums[i]+nums[j]==target){
            a=i;
            b=j;
            }
        }
    }
  }
return {a,b};
    }

};
