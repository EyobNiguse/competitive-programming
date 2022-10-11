class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int l=0;
        int r=0;
        int n =  arr.size();
        int ans = 0;
        // 2 1 4 7 3 2 5 
         //  ^
        while(l < n){
            int count = 0;
            while( l < n-1 && arr[l] < arr[l+1]){
              count++;
              l++;   
            }
            // count++;
            int count2 = 0;
            int tempL = l;
            if(count > 0){
            while(tempL < n-1 &&  arr[tempL] > arr[tempL+1]){
                    count2++;
                    tempL++;
                }
            }
            if(count>0 &&count2>0){
                ans =  max(ans,count + count2 +1);
            }
        l++;
        }
        return ans;
    }
};