class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int sz = nums.size();
    
        if(sz < 2 &&  k > 0){
            return sz;
        }
        int l=0;
        int ans= 0 ;
        int r= 0;
        int counter = 0;
        while(r<sz){
            if(nums[r]==0){
                counter++;
            }
            while(counter > k){
                if(nums[l]==0){
                    counter--;
                }
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
            
        }
  
        return ans;
    }
};