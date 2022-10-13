class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        vector<int>ps;
        ps.push_back(arr[0]);
        int ans = 0;
        for(int i =1; i< arr.size();i++){
            ps.push_back(ps[ps.size()-1] + arr[i]);
        }
        int n  =  arr.size();
        if(ps[k-1] / k >= threshold ){
           ans++; 
        }
        int l = 1;
        while( l < n ){
            if(l + k <= n  && (ps[l + k - 1] - ps[l-1]) / k >= threshold  ){
                ans++;
            } 
           l++;
        }
     
        return ans;
    }
};