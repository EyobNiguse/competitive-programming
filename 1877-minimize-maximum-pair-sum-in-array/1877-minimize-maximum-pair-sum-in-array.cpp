class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxI = 0;
        //minimze the maximum pair sum
         for(int i=0; i < n ; i++){
             maxI = max(maxI,(nums[i] + nums[n-(i+1)]));
         }
        
        return maxI;
 
      
     
    }
};