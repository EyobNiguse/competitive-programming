class Solution {
public:
 
    int maxResult(vector<int>& nums, int k) {
        if(nums.size() == 1){
            return nums[0];
        }
        deque<pair<int,int>>temp;
        int maxNum =  nums[0];
        temp.push_back({nums[0],0});
        // temp.push_back({nums[0],0});
        for(int i = 1; i < nums.size();i++){
            
            while( temp.size() > 0  &&  temp.front().second < i- k  ){
                temp.pop_front();
            }
            maxNum = nums[i] + temp.front().first;
            // push in to the monotonic deque 
            while(temp.size() > 0  &&  temp.back().first < (temp.front().first + nums[i])){
                temp.pop_back();
            }
            cout<<maxNum <<" ";
            temp.push_back({maxNum,i});
            
            
        }

 
    return maxNum;     
        
   }
};

