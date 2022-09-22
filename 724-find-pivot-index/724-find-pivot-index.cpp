class Solution {
public:
    int pivotIndex(vector<int>& nums) {
           
        int sum = 0;
        for(int i=0; i < nums.size();i++){
          sum+=nums[i];
           
        }
       int  sumLeft = 0;
        for(int i =0; i< nums.size();i++){
            if(sumLeft == sum -sumLeft-nums[i]){
                return i;
            }
              sumLeft+=nums[i];
        }
       
       return -1;
    }
};