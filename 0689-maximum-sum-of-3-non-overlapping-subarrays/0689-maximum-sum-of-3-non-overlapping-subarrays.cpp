class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int>sum = {0};
        for(int i=0; i < nums.size();i++){
            sum.push_back(sum.back() + nums[i]);
        }
        vector<int>posLeft(n,0);
        vector<int>posRight(n,n-k);
        int tot = sum[k]-sum[0];
        for(int i= k; i < n;i++){
            if(sum[i+1] - sum[i+1-k]>tot){
                posLeft[i] = i+1-k;
                tot = sum[i+1] - sum[i+1-k];
            }else{
                posLeft[i] = posLeft[i-1];
            }
          
        }
     
        tot = sum[n] - sum[n-k];
       
        // right
        for(int i = n-k-1; i >= 0; i--){
            if(sum[i+k]-sum[i]>=tot){
                    posRight[i] = i;
                    tot  = sum[i+k]-sum[i];
                }else{
                    posRight[i] = posRight[i+1];
                }
        }
                
        // calculate the middle
        int maxSum = 0;
        tot = 0;
        vector<int>ans(3);
        for(int i = k; i <= n - 2*k ; i++){
            int l  = posLeft[i-1]; int r = posRight[i+k];
            tot = ( sum[i+k] - sum[i]) + (sum[l+k] - sum[l]) + (sum[r+k] - sum[r]); 
            if(tot > maxSum){
                maxSum = tot;
                ans = {l,i,r};
            }
        }
        
        return ans;
            }

};