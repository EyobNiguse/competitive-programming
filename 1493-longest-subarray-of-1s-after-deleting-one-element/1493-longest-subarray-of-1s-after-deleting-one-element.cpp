class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int allowed = 1;
        int ans = 0;
        int l=0;
        int n  =  nums.size();
        int r = 0;
        int count = 0;
        while(r< n){
            int tempal = allowed;
            while(r < n && (nums[r] == 1 || allowed==1) ){
                if(nums[r]==0){
                    allowed--;
                }else{
                    count++;
                }
                r++;
            }
            ans = max(ans,count);
            while(l < n  && allowed < 1){
                if(nums[l]==0){
                    allowed++;
                }else{
                count--;                    
                }
                l++;
            }
        }
        if(ans >= nums.size()){
            ans--;
        }
    return ans;
    }
};