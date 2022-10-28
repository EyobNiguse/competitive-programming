class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
       //  count valleys
        int l=0;
        int r = l+1;
        int n = security.size();
        vector<int>output;
        vector<int>dec(n+1);
        vector<int>inc(n+1);
        while(r < n){
            int count=0;
            while(r < n && security[l]>=security[r]){
              count++;
              dec[r] = count;
              r++;
              l++;
            }
             r++;
             l++;
        }
       
         l=n-1; 
         r=l-1;
        while(r >= 0){
            int count =0;
            while(r >=0 && security[r] <= security[l]){
                count++;
                inc[r] = count;
                r--;
                l--;
            }
         
            r--;
            l--;
        }  
        for(int i=0; i < n;i++){
            if(inc[i]>= time && dec[i]>=time){
                output.push_back(i);
            }
        }

        return output;
    }
};