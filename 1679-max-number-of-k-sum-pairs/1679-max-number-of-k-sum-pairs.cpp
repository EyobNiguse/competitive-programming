class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
      
       
        int end = nums.size() -1 ;
        int start = 0;
        int maxOperations = 0;
        while(start < end){
        if(nums[end] + nums[start] == k){
            maxOperations++;
            start++;
            end--;
        }else if(nums[end] + nums[start] < k){
            start++;
        }else{
            end--;
        }
        
            
        }
        
    return maxOperations;
    }
};