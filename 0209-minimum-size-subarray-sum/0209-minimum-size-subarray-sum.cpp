class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       vector<int>ps;
        ps.push_back(nums[0]);
        if(nums[0]>=target){
            return 1;
        }
        for(int i=1; i<  nums.size();i++){
            if(nums[i]>=target){
                return 1;
            }
            ps.push_back(ps[ps.size()-1]+nums[i]);
        }
        
        int ans =nums.size()+1;
        int l = 0;
        int r= 0;
        int n = nums.size();
        int count = 0;
        int sum = 0; 
        while(r < n){
  
            sum += nums[r];
            while(sum >= target ){
             ans = min(ans, r-l+1);
             sum -= nums[l]; 
             l++;
                
        }  
        r++;
        }
     
    return  ans % (nums.size()+1);
    }
};