class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector <int> output(nums.size());
    vector <int> cpNums = nums;
   // determine the max
    int max = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max){
                max = nums[i];
            }
    }
    vector<int> values(max+1);
    
    for(int i=0;i<nums.size();i++){
        
        values[nums[i]] +=1; 

     }
    for(int i=0;i<nums.size();i++){
         int count = 0;
          for(int j=0; j < cpNums[i]; j++){    
          count += values[j];
          }
             output[i]=(count);
     }
        return output;
    }
};