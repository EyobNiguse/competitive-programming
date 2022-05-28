class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        // count sort 
        //sort 
         sort(nums.begin(),nums.end());
         int maxI = *max_element(nums.begin(),nums.end());
         vector<int> counter(maxI+1);
          vector<int> duplicates;
          int output = 0;
          int numberOfRepeated = 0;
        if(nums.size() ==1){
            return 0;
        }
         int tempMax=nums[0];
        for(int i=1;i < nums.size();i++){

            if(tempMax >= nums[i]){
                int diff = tempMax - nums[i] + 1;
                nums[i]+=diff;
                tempMax = nums[i];
                output+=diff;
                cout<<i<<" ";
            }else if(nums[i-1] >= nums[i]){
                int diff = nums[i-1] - nums[i] + 1;
                nums[i]+=diff;
                tempMax = nums[i];
                output+=diff;
            }          

       }
        return output;
    }
};