class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        int count = 1;
        long long ans = 0;
        ans = 1;
        for(int i = 1; i < n; i++){
            if(prices[i] == prices[i-1] - 1){
                count++;
            }
            else{
                count = 1;
            }
            ans += count;
        }
        return ans;
    }
};