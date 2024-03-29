class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n  = arr.size();
        unordered_map<int, int >um;
        int ans= 0 ;
        int mod = 1e9+7;
        for(int i=0; i<n; i++){
        ans = (ans + um[target - arr[i]]) % mod; 
            for(int j =0;j<i; j++){
                um[arr[i]+arr[j]]++;
            };    
        }
        return ans;
    }
};