class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sortedNums = nums;
         int counter = 0;
        int initial = 0;
        int end = 0;
        sort(sortedNums.begin(), sortedNums.end());
        for(int i=0; i < nums.size();i++){
          if(sortedNums[i] != nums[i]){
              if(counter == 0){
                  initial = i;
              }else{
                  end = i;
              }
            counter++;
          } 
          }
        if(end - initial > 0){
            
            return (end - initial) + 1;
                
        }
        return 0;
    }
};