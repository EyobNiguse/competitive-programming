class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int count=0;
        int sum=0;
        int n= nums.size();
        unordered_map<int, int>um;
        um[0] = 1;
        for(int i =0; i < n;i++){
            sum  += nums[i];
     
               if( um.find(sum-k)!=um.end()){
                   
                   count+=um[sum-k];
              
                   }
                   
               um[sum]++;
        
            
        }

   
        
    return count;
    }
};