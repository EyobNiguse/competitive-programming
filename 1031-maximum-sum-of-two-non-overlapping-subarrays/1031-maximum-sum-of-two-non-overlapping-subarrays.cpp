class Solution {
public:
    int findSum(vector<int>& nums , int x, int y){
        vector<int>dp1(nums.size(),0);
        vector<int>dp2(nums.size(),0); 
        int sumR = 0;
       
        int ans = -1;
        for(int i=0; i < nums.size(); i++){
            sumR += nums[i];
            if(i < x){
                dp1[i] = sumR;
            }else{
                sumR-= nums[i-x];
                dp1[i] = max(dp1[i-1],sumR);
            }
        }
  
        sumR = 0;
      
        for(int i = nums.size()-1 ; i >=0; i--){
            sumR += nums[i];
            if(i + y > nums.size()-1){
                dp2[i] = sumR;
            }else{
                sumR -= nums[i+y];
                dp2[i] = max(dp2[i+1],sumR);
            }
            
            
            
        }
        
        for(int i =x-1;i < nums.size()-y;i++){
            ans = max(ans,dp1[i]+dp2[i+1]);
             
        }
        return ans;
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        return max(findSum(nums, firstLen, secondLen),findSum(nums,secondLen,firstLen));
    }
};