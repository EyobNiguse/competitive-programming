class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int val = 0;
    sort(nums.begin(),nums.end());
    if(nums[0] !=  0 ){
            return 0;
        }
        if(nums.size()  == 1) {
        
            return 1;
        }
        for(int i=0; i < nums.size()-1;i++){
    
            if( abs(nums[i+1] -  nums[i]) != 1 ){
 
              val= nums[i]+1;
              return val;  
          }else if( i+1 == nums.size()-1 && nums[i] < nums.size() ){
            
              val = nums[i] + 2;
          }
 
      }
 
        return val;
    }
};
