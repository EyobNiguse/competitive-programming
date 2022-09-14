class Solution {
public:
    int maxIndex = 0;
    int minIndex = 0;
 
        int longestSubarray(vector<int>& nums, int limit) {
          if(nums.size()==1){
            return 1;
        }
            deque<int> minQueue;
         deque<int> maxQueue;
      //  
        int length=0;
        int slow = 0;
        for(int fast=0; fast <  nums.size();fast++){
            while(minQueue.size()!=NULL && minQueue.back() > nums[fast]){
              minQueue.pop_back();    
            }
            minQueue.push_back(nums[fast]);
                while(maxQueue.size() != NULL && maxQueue.back() < nums[fast]){
                    maxQueue.pop_back();
                }
            maxQueue.push_back(nums[fast]);
            if(abs(maxQueue.front() - minQueue.front()) <= limit){
                length = max(length , (fast - slow + 1));
            }else{
                if(maxQueue.front() == nums[slow]){
                    maxQueue.pop_front();    
                }
                if(minQueue.front()== nums[slow]){
                   minQueue.pop_front();
                }
                slow++;
            }
        }
        
        
    return length;
    }
};