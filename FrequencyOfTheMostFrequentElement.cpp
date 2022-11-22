class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
      int l=0;
      int r=0;
      long sum=0;
      int ans = 0;
      sort(nums.begin(), nums.end());
      while(l  < nums.size()){
            sum+=nums[l];
            while(sum+k < (long)nums[l] * (l-r+1)){
                sum -= nums[r];
                r++;
            }
          ans=  max(ans,l-r+1);
          l++;
        }
      return ans;
    }
};
