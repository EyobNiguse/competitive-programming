class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        long ans = nums.size()+1;
        long l=0;
        long r =0;
        vector<long>num(ans);
          int count =0;
        for(auto x: nums){
            num[count] =x;
            count++;
        }
        deque<long>dq;
        while(l < nums.size()){
            if(l>0){
                num[l] += num[l-1];
            }
            if(num[l]>= k){
                ans  =  min(ans,l+1);
                cout<<ans<<" ";
            }
            while(dq.size()>0 && num[l] - num[dq.front()] >= k  ){
                ans = min(ans, l - dq.front());
                dq.pop_front();
            }
            while(dq.size() > 0 && num[l] <= num[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(l);
            l++;
        }
        return ans <= nums.size() ?  ans:-1;
    }
};