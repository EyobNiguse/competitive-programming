class Solution {
public:
    
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.rbegin(),nums.rend(),[&](string&  a, string& b){
            if(a.length()==b.length()){
                return a<b;
            }
            return a.length()<b.length();
        });
        return nums[k-1];
    }
};