class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int total  = 1;
     vector<int>ans(nums.size()); 
      for(int i=0; i < nums.size();i++ ){
       ans[i] = total ;   
        total *= nums[i];
      }
     total =1;  ;
    
    for(int i=ans.size()-1; i >=0 ; i--){
        ans[i]*=total;
        total *= nums[i];
     }
        return ans;
    }
};