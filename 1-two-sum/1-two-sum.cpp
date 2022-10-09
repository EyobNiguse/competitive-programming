class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int l =0;
        int r = 0;
        int n = nums.size();
        int sum = 0;
        vector<int>output;
        unordered_map<int, int>um;
        while( r < n){
        if(um.find(target - nums[r]) != um.end()){
            output.push_back(um[target-nums[r]]);
            output.push_back(r);
            return output;
        }
        um[nums[r]] = r;
        r++;
        }
      return output;
    }
};