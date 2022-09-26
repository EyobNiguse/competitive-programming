class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        int l=0;
        int r=0;
        int n = nums.size();
        int ans= 0;
        int counter=0;
        int sum=0;
        unordered_map<int,int>um;
        um[0]=1;
  
        while(r<n){
            
            if(nums[r]%2!=0){
               sum++;
            }
     
            counter+=um[sum-k];
            um[sum]++;
            r++;
        }
        
    
    return counter;
    }
};