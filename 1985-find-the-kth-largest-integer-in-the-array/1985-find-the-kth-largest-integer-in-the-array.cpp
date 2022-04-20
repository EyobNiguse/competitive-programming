class Solution {
public:
    static bool mycomp(string& a , string& b){
         if(a.length()==b.length()){
                return a<b;
            }
            return a.length()<b.length();
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.rbegin(),nums.rend(),mycomp);
        return nums[k-1];
    }
};